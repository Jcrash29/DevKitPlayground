#pragma once

#include "hardwareDefinitions.h"
#include "stm32l0xx_hal.h"

void Gpio_initOutput(hw_gpio_id_t gpio_id, GPIO_TypeDef* port, uint16_t pin );

void Gpio_initInput(hw_gpio_id_t gpio_id, GPIO_TypeDef* port, uint16_t pin );

void Gpio_initAdvanced(hw_gpio_id_t gpio_id, GPIO_TypeDef* port, uint16_t pin,
			uint32_t mode, uint32_t pull, uint32_t speed, uint32_t alternate);

void Gpio_Set(hw_gpio_id_t gpio_id);

void Gpio_Reset(hw_gpio_id_t gpio_id);
