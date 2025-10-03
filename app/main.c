// main.c



#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>

struct gpio_dt_spec{
const struct device *port;
gpio_pin_t pin;
gpio_dt_flags_t dt_flags

};

