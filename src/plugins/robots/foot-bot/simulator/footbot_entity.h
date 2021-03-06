/**
 * @file <argos3/plugins/robots/foot-bot/simulator/footbot_entity.h>
 *
 * @author Carlo Pinciroli - <ilpincy@gmail.com>
 */

#ifndef FOOTBOT_ENTITY_H
#define FOOTBOT_ENTITY_H

namespace argos {
   class CControllableEntity;
   class CFootBotDistanceScannerEquippedEntity;
   class CEmbodiedEntity;
   class CFootBotEntity;
   class CFootBotTurretEntity;
   class CGripperEquippedEntity;
   class CGroundSensorEquippedEntity;
   class CLEDEquippedEntity;
   class CLightSensorEquippedEntity;
   class COmnidirectionalCameraEquippedEntity;
   class CProximitySensorEquippedEntity;
   class CRABEquippedEntity;
   class CWiFiEquippedEntity;
}

#include <argos3/core/simulator/entity/composable_entity.h>
#include <argos3/plugins/simulator/entities/wheeled_entity.h>

namespace argos {

   class CFootBotEntity : public CComposableEntity {

   public:

      ENABLE_VTABLE();

   public:

      CFootBotEntity();

      CFootBotEntity(const std::string& str_id,
                     const std::string& str_controller_id,
                     const CVector3& c_position = CVector3(),
                     const CQuaternion& c_orientation = CQuaternion(),
                     Real f_rab_range = 3.0f,
                     const CRadians& c_aperture = ToRadians(CDegrees(70.0f)));

      virtual void Init(TConfigurationNode& t_tree);
      virtual void Reset();
      virtual void UpdateComponents();
      
      inline CControllableEntity& GetControllableEntity() {
         return *m_pcControllableEntity;
      }

      inline CFootBotDistanceScannerEquippedEntity& GetDistanceScannerEquippedEntity() {
         return *m_pcDistanceScannerEquippedEntity;
      }

      inline CFootBotTurretEntity& GetTurretEntity() {
         return *m_pcTurretEntity;
      }

      inline CEmbodiedEntity& GetEmbodiedEntity() {
         return *m_pcEmbodiedEntity;
      }

      inline CGripperEquippedEntity& GetGripperEquippedEntity() {
         return *m_pcGripperEquippedEntity;
      }

      inline CGroundSensorEquippedEntity& GetGroundSensorEquippedEntity() {
         return *m_pcGroundSensorEquippedEntity;
      }

      inline CLEDEquippedEntity& GetLEDEquippedEntity() {
         return *m_pcLEDEquippedEntity;
      }

      inline CLightSensorEquippedEntity& GetLightSensorEquippedEntity() {
         return *m_pcLightSensorEquippedEntity;
      }

      inline COmnidirectionalCameraEquippedEntity& GetOmnidirectionalCameraEquippedEntity() {
         return *m_pcOmnidirectionalCameraEquippedEntity;
      }

      inline CProximitySensorEquippedEntity& GetProximitySensorEquippedEntity() {
         return *m_pcProximitySensorEquippedEntity;
      }

      inline CRABEquippedEntity& GetRABEquippedEntity() {
         return *m_pcRABEquippedEntity;
      }

      inline CWheeledEntity& GetWheeledEntity() {
         return *m_pcWheeledEntity;
      }

      inline CWiFiEquippedEntity& GetWiFiEquippedEntity() {
         return *m_pcWiFiEquippedEntity;
      }

      virtual std::string GetTypeDescription() const {
         return "foot-bot";
      }

   private:

      CControllableEntity*                   m_pcControllableEntity;
      CFootBotDistanceScannerEquippedEntity* m_pcDistanceScannerEquippedEntity;
      CFootBotTurretEntity*                  m_pcTurretEntity;
      CEmbodiedEntity*                       m_pcEmbodiedEntity;
      CGripperEquippedEntity*                m_pcGripperEquippedEntity;
      CGroundSensorEquippedEntity*           m_pcGroundSensorEquippedEntity;
      CLEDEquippedEntity*                    m_pcLEDEquippedEntity;
      CLightSensorEquippedEntity*            m_pcLightSensorEquippedEntity;
      COmnidirectionalCameraEquippedEntity*  m_pcOmnidirectionalCameraEquippedEntity;
      CProximitySensorEquippedEntity*        m_pcProximitySensorEquippedEntity;
      CRABEquippedEntity*                    m_pcRABEquippedEntity;
      CWheeledEntity*                        m_pcWheeledEntity;
      CWiFiEquippedEntity*                   m_pcWiFiEquippedEntity;
   };

}

#endif
