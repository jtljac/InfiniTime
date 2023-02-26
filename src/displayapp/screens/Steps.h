#pragma once

#include <cstdint>
#include <lvgl/lvgl.h>
#include "displayapp/screens/Screen.h"
#include "displayapp/widgets/StatusIcons.h"
#include <components/motion/MotionController.h>

namespace Pinetime {

  namespace Controllers {
    class Settings;
    class Battery;
    class Ble;
  }

  namespace Applications {
    namespace Screens {

      class Steps : public Screen {
      public:
        Steps(Controllers::MotionController& motionController, Controllers::Settings& settingsController, Controllers::Battery& batteryController, Controllers::Ble& bleController);
        ~Steps() override;

        void Refresh() override;
        void lapBtnEventHandler(lv_event_t event);

      private:
        Controllers::MotionController& motionController;
        Controllers::Settings& settingsController;

        uint32_t currentTripSteps = 0;

        lv_obj_t* lSteps;
        lv_obj_t* stepsArc;
        lv_obj_t* resetBtn;
        lv_obj_t* resetButtonLabel;
        lv_obj_t* tripLabel;

        Widgets::StatusIcons statusIcons;

        uint32_t stepsCount;

        lv_task_t* taskRefresh;
      };
    }
  }
}
