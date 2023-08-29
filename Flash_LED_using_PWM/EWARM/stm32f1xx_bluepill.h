#ifndef __BPILL_H
#define  __BPILL_H


#define Ibutton_GPIO_Port          GPIOB
#define LED13_GPIO_CLK_ENABLE()   __HAL_RCC_GPIOC_CLK_ENABLE()
#define LED13_GPIO_CLK_DISABLE()  __HAL_RCC_GPIOC_CLK_DISABLE()

#endif