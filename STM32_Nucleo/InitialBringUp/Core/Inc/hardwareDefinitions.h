#pragma once

typedef enum{
  gpio_LED1 = 0,
  gpio_BLUE_BUTTON,
  gpio_UART2TX,
  gpio_UART2RX,
  HW_GPIO_MAX,
} hw_gpio_id_t;


typedef enum{
  MAIN = 0,
  OUTPUT,
  HW_UART_MAX,
} hw_uart_id_t;

void Hw_Init();
