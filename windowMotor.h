#pragma once

#include "esphome/core/component.h"
#include "esphome/core/gpio.h"

// Namespace definition
namespace esphome::window_motor {

class WindowMotor : public Component {

  public:
    // Constructor
    WindowMotor();
    
    // Standard component functions to override
    void setup() override;
    void dump_config() override;

    // Add any setters of configuration variables
    void set_boardid0_pin(InternalGPIOPin *pin) {boardid0_pin_ = pin;}
  protected:
    // Internal fields definition
    InternalGPIOPin *boardid0_pin_{nullptr};

    int boardId{0};
};

}  // namespace esphome::window_motor