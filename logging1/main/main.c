#include <stdio.h>
#include"esp_log.h"

void app_main(void)
{
    esp_log_level_set("LOG",ESP_LOG_INFO);
    ESP_LOGE("LOG","This is Error");


}