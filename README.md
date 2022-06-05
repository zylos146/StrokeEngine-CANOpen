# [StrokeEngine-CANOpen](https://github.com/zylos146/StrokeEngine-CANOpen)
This library provides drivers for [Stroke Engine](https://github.com/theelims/StrokeEngine)
It needs to be included in a special way, and the user must build their own `OD.c`, `OD.h`, and `CO_config_target.h`.
Initialization of CANOpen also needs to be handled by the user including the library.

This library is primarily intended for usage by [CANFuck](https://github.com/zylos146/CANFuck), which can be used as a base for it can be integrated into an end-user application

## Supported Drives
- CANOpen
  - LinMot CiA 402 CANOpen capable drives
    - :x: E1200-EC / E1200-DC are not supported unless EtherCat support is built
    - :heavy_check_mark: E1200-GP-xx (Haven't confirmed yet, but should work)
    - :heavy_check_mark: E1100-GP-xx (Haven't confirmed yet, but should work)
    - :heavy_check_mark: E1100-CO-xx (Haven't confirmed yet, but should work)
    - :heavy_check_mark: B1100-GP-xx
    - :heavy_check_mark: A1100-GP-LC
  - Other CiA 402 drives could likely be ported with minimal effort
- EtherCat - Not yet supported, but might be in the future if demand arises
  - CiA 402
    - :question: Rtelligent ECT60 / ECT40 Closed-Loop Servos
    - :question: LinMot EtherCat CiA 402 capable drives (E1200-DC, etc)

## CANOpenNode Library Source
See [CANOpenNode-ESP32](https://github.com/zylos146/CANOpenNode-ESP32) which was directly put into this repo for CANOpen functionality