#include <stdio.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include "esp_log.h"
#include "sin_wave.h"

extern "C" void app_main()
{
    sin_wave_model_init();

    while (1)
    {
        sin_wave_model_predict(0.5235f);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}