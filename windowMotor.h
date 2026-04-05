#pragma once

#include "esphome/core/component.h"
#include "esphome/core/gpio.h"

// Namespace definition
namespace esphome::window_motor {

class WindowMotor : public PollingComponent {

  public:
    // Constructor
    WindowMotor();
    
    // Standard component functions to override
    void setup() override;
    void dump_config() override;
    void update() override;

    // Add any setters of configuration variables
    void set_boardid0_pin(InternalGPIOPin *pin) {boardid0_pin_ = pin;}
    void set_boardid1_pin(InternalGPIOPin *pin) {boardid1_pin_ = pin;}
    void set_boardid2_pin(InternalGPIOPin *pin) {boardid2_pin_ = pin;}
    // getters
    uint8_t getBoardId() const;
  protected:
    // Internal fields definition
    InternalGPIOPin *boardid0_pin_{nullptr};
    InternalGPIOPin *boardid1_pin_{nullptr};
    InternalGPIOPin *boardid2_pin_{nullptr};

    uint8_t boardId{0};
};

}  // namespace esphome::window_motor