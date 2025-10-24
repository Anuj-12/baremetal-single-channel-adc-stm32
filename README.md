# STM32F401RE BAREMETAL ADC DRIVER

## Overview

Single channel implementation of an Analog to Digital Converter (ADC) for STM32F401RE The project demonstrates direct register-level configuration of GPIO and ADC peripherals to sample an analog voltage and output the result via UART/Serial.

## Features

- Single channel, single conversion mode
- Software-triggered conversions
- Polling for end-of-conversion (EOC) flag
- Reads raw 12-bit ADC value from ADC_DR
- Calibrated for 3.3 V reference

## Hardware Setup

- Board: STM32F401RE (Nucleo Board)
- Toolchain: STM32CubeIDE
- Serial Monitor: PuTTY/Picocom

## Usage

- Clone this repo
- Open in STM32CubeIDE
- Build and flash to STM32F401RE
- Open serial monitor at 115200 baud
- Use PA1 to measure analog voltage

## Next Steps

- Add multi-channel scanning (SQR1–SQR3)
- Implement interrupt-driven ADC or DMA transfer
- Add filtering/averaging routines
