#include"motor.h"
#include"sys.h"


void MOTOR_Init()
{
	GPIO_InitTypeDef GPIO_InitTypeDefStruct;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE); //使能端口时钟A
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE); //使能端口时钟B
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC,ENABLE);

	
	//初始化I/O口
	GPIO_InitTypeDefStruct.GPIO_Mode=GPIO_Mode_Out_PP;//A8
	GPIO_InitTypeDefStruct.GPIO_Pin=GPIO_Pin_8;
	GPIO_InitTypeDefStruct.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_InitTypeDefStruct);  
	GPIO_SetBits(GPIOA,GPIO_Pin_8);
	
	GPIO_InitTypeDefStruct.GPIO_Mode=GPIO_Mode_Out_PP;//A9
	GPIO_InitTypeDefStruct.GPIO_Pin=GPIO_Pin_9;
	GPIO_InitTypeDefStruct.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_InitTypeDefStruct);  
	GPIO_SetBits(GPIOA,GPIO_Pin_9);
	
  
	GPIO_InitTypeDefStruct.GPIO_Mode=GPIO_Mode_Out_PP;//C0
	GPIO_InitTypeDefStruct.GPIO_Pin=GPIO_Pin_0;
	GPIO_InitTypeDefStruct.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOC,&GPIO_InitTypeDefStruct);  
	GPIO_SetBits(GPIOC,GPIO_Pin_0);
	
	GPIO_InitTypeDefStruct.GPIO_Mode=GPIO_Mode_Out_PP;//C1
	GPIO_InitTypeDefStruct.GPIO_Pin=GPIO_Pin_1;
	GPIO_InitTypeDefStruct.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOC,&GPIO_InitTypeDefStruct);  
	GPIO_ResetBits(GPIOC,GPIO_Pin_1);
	
	GPIO_InitTypeDefStruct.GPIO_Mode=GPIO_Mode_Out_PP;//C2
	GPIO_InitTypeDefStruct.GPIO_Pin=GPIO_Pin_2;
	GPIO_InitTypeDefStruct.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOC,&GPIO_InitTypeDefStruct);  
	GPIO_SetBits(GPIOC,GPIO_Pin_2);
	
	GPIO_InitTypeDefStruct.GPIO_Mode=GPIO_Mode_Out_PP;//C3
	GPIO_InitTypeDefStruct.GPIO_Pin=GPIO_Pin_3;
	GPIO_InitTypeDefStruct.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOC,&GPIO_InitTypeDefStruct);  
	GPIO_ResetBits(GPIOC,GPIO_Pin_3);
	
	GPIO_InitTypeDefStruct.GPIO_Pin=GPIO_Pin_0;      //B0
	GPIO_InitTypeDefStruct.GPIO_Mode=GPIO_Mode_IPD;
	GPIO_InitTypeDefStruct.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOB,&GPIO_InitTypeDefStruct);  

	
	GPIO_InitTypeDefStruct.GPIO_Pin=GPIO_Pin_1;      //B1
	GPIO_InitTypeDefStruct.GPIO_Mode=GPIO_Mode_IPD;	
	GPIO_InitTypeDefStruct.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOB,&GPIO_InitTypeDefStruct);  

	
	GPIO_InitTypeDefStruct.GPIO_Pin=GPIO_Pin_2;      //B2
	GPIO_InitTypeDefStruct.GPIO_Mode=GPIO_Mode_IPD;	
	GPIO_InitTypeDefStruct.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOB,&GPIO_InitTypeDefStruct);  

	
}


