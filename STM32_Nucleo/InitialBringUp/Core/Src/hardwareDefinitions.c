#include "hardwareDefinitions.h"
#include "stm32l0xx_hal.h"
#include "hw_GPIO.h"
#include "hw_UART.h"

/* Private Functions */
void hw_Gpio()
{
  /* Set outputs */
  Gpio_initOutput(gpio_LED1, GPIOA, GPIO_PIN_5);

  /* Set inputs */
  Gpio_initInput(gpio_BLUE_BUTTON, GPIOC, GPIO_PIN_13)

  /* Set advanced GPIO */
  Gpio_initAdvanced(gpio_UART2TX,GPIOA, GPIO_PIN_2,GPIO_MODE_AF_PP,GPIO_NOPULL,GPIO_SPEED_LOW,GPIO_AF7_USART2);
  Gpio_initAdvanced(gpio_UART2RX,GPIOA, GPIO_PIN_3,GPIO_MODE_AF_PP,GPIO_NOPULL,GPIO_SPEED_LOW,GPIO_AF7_USART2);
}

void hw_Uart()
{
  Uart_activate(MAIN, USART2);
}


/* Public Functions */
void Hw_Init()
{
  hw_Gpio();
  hw_Uart();
}
