# I2C Scan

This application scans the I2C bus for devices.

## Build and Flash

```shell
west build -b pandora_stm32l475
west flash
```

# Usage

```shell
uart:~$ 

[00:00:00.000,000] <inf> app: I2C Scan! pandora_stm32l475

uart:~$ i2c scan i2c@40005c00 
     0  1  2  3  4  5  6  7  8  9  a  b  c  d  e  f
00:             -- -- -- -- -- -- -- -- -- -- -- -- 
10: 10 -- -- -- -- -- -- -- -- -- -- -- -- -- 1e -- 
20: -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- 
30: -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- 
40: -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- 
50: -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- 
60: -- -- -- -- -- -- -- -- 68 -- -- -- -- -- -- -- 
70: -- -- -- -- -- -- -- --                         
3 devices found on i2c@40005c00
uart:~$ 
```
