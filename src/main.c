#include "stm32f30x_conf.h"
#include "30010_io.h"
#include "hardware_control.h"
#include "draw_objects.h"
#include "vectors.h"

int main(void) {
    init_usb_uart(115200);

    while(1) {}
}
