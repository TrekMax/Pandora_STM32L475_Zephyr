# Pandora_STM32L475_Zephyr

Adapt Zephyr RTOS App for Pandora STM32L475 Development Board

## Hardware

[Pandora STM32L475 Development Board](http://www.openedv.com/docs/boards/iot/zdyz_panduola.html)

![Pandora STM32L475 Development Board](./assets/images/hardware/Pandora_STM32L475.png)


# Developing With Zephyr

- [Zephyr Project Documentation](https://docs.zephyrproject.org/latest/index.html)

- [Getting Started Guide](https://docs.zephyrproject.org/latest/develop/getting_started/index.html)

## Install Zephyr SDK

## Build and run Test

```shell
cd ~/zephyrproject/zephyr
west build -p always -b pandora_stm32l475 samples/basic/blinky
west flash
```

# Build Zephyr RTOS App for Pandora STM32L475 Development Board

```shell
source ~/zephyrproject/.venv/bin/activate
export ZEPHYR_BASE=~/zephyrproject/zephyr
```

## Build and run Test

```shell
cd projects/getting_started/blinky
west build -p always -b pandora_stm32l475
west flash
```

# Samples list

> Adapt Zephyr RTOS App for Pandora STM32L475 Development Board

| Sample | Description | Status | Notes |
| ------ | ----------- | ------ | ----- |
| [getting_started/blinky](./projects/getting_started/blinky) | Blinky | ✅ Done | |
| [getting_started/button](./projects/getting_started/button) | Hello World | ✅ Done | |
| [drivers/display](./projects/drivers/display) | Display | ✅ Done | |
| [drivers/gpio](./projects/drivers/gpio) | GPIO | :construction: Todo | |
| [drivers/i2c](./projects/drivers/i2c) | I2C | :construction: Todo | |
| [drivers/pwm](./projects/drivers/pwm) | PWM | :construction: Todo | |
| [drivers/uart](./projects/drivers/uart) | UART | :construction: Todo | |
| [drivers/spi_flash](./projects/drivers/spi_flash) | SPI Flash | ✅ Done | |
| [lvgl/lvgl](./projects/lvgl/lvgl) | LVGL | ✅ Done | |
| [subsys/shell/shell_module](./projects/subsys/shell/shell_module) | Shell | ✅ Done | |
| [subsys/shell/devmem_load](./projects/subsys/shell/devmem_load) | Shell | ✅ Done | |
| [subsys/usb/cdc_acm](./projects/subsys/usb/cdc_acm) | USB CDC ACM | 🐛 Debugging | |


