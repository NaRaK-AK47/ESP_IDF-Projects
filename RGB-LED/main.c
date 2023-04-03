#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

#include "rgb_led.h"
void app_main(void)
{
    while (true) {
        printf("Hello from app_main!\n");
        rgb_led_wifi_app_started();
        sleep(500);
    }
}
