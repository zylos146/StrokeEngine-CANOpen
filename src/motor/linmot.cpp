#include "motor/linmot.hpp"

void LinmotMotor::unsafeGoToPos(float position, float speed, float acceleration) {
  if (!this->isInState(MotorState::ACTIVE)) {
    ESP_LOGE("LinmotMotor", "Attempted to issue Motion CMD while in incorrect state '%s'!", this->getStateString());
    return;
  }

  // Convert from 1 mm/s -> 0.1 um/s
  // Then scale by Linmot scaling factor
  this->CO_sendCmd(
    0x0900, 
    static_cast<uint16_t>(this->mapSafePosition(position) * 10000 / positionScale),
    static_cast<uint16_t>(speed * 10000 / speedScale), 
    static_cast<uint16_t>(acceleration * 10000 / accelerationScale), 
    static_cast<uint16_t>(acceleration)
  );
}

void LinmotMotor::stopMotion() {
  
}