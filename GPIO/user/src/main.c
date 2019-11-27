#define USE_STDPERIPH_DRIVER
#include "stm32f10x.h"
void gpio_init(void)
{
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOF, ENABLE);
    GPIO_InitTypeDef gpio;
    gpio.GPIO_Mode = GPIO_Mode_Out_PP;
    gpio.GPIO_Speed = GPIO_Speed_50MHz;
    gpio.GPIO_Pin = GPIO_Pin_6|GPIO_Pin_7;
    GPIO_Init(GPIOF,&gpio);
    GPIO_ResetBits(GPIOF,GPIO_Pin_6|GPIO_Pin_7); 
}
int main() 
{
    gpio_init();
    while(1);
}
