# Pandora_STM32L475_Zephyr

Adapt Zephyr RTOS App for Pandora STM32L475 Development Board

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
cd projects/hello_world
west build -p always -b pandora_stm32l475
west flash
```