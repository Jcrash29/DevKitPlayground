#pragma once

#include "hardwareDefinitions.h"
#include "stm32l0xx_hal.h"
void Uart_init();

void Uart_activate(hw_uart_id_t uartID, USART_TypeDef * uartNumber);

int uprintf(hw_uart_id_t uartID, const char* format, ...);
