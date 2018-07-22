#include "motor.h"
#include "delay.h"
#include "sys.h"
#include "pwm.h"
#include "turn.h"



void gostraight(void)  //直走函数
{
	if(k1==0&&k2==1&&k3==0)  //判断中间传感器是否压线
	{
		delay_us(1);
		if(k1==0&&k2==1&&k3==0)
		{
		speedleft=79;
		speedright=79;
			IN1=1;
			IN2=0;
			IN3=1;
			IN4=0;
		}
	
	}
}

void turnleft(void)  //左转函数
{
	if(k1==1&&k2==0&&k3==0)  //判断左边传感器是否压线
	{
		delay_us(1);
		if(k1==1&&k2==0&&k3==0)
		{
			speedleft=70;
			speedright=70;
			IN1=0;
			IN2=0;
			IN3=1;
			IN4=0;
		}
	
	}
}

void turnright(void)  //右转函数
{
	if(k1==0&&k2==0&&k3==1) //判断右边传感器是否压线
	{
		delay_us(1);
		if(k1==0&&k2==0&&k3==1)
		{
			speedleft=70;
			speedright=70;
			IN1=1;
			IN2=0;
			IN3=0;
			IN4=0;
		}
	}	
}

void special1(void)  //左右传感器同时检测到黑线，为不可能情况
{
	if(k1==1&&k2==0&&k3==1)
	{
		delay_us(1);
		if(k1==1&&k2==0&&k3==1)
		{
			IN1=0;
			IN2=0;
			IN3=0;
			IN4=0;
		}
	}	
}	

void special2(void)  //中间和右边传感器同时检测到黑线
{
	if(k1==0&&k2==1&&k3==1)
	{
		delay_us(1);
		if(k1==0&&k2==1&&k3==1)
		{
			speedleft=79;
			speedright=79;
			IN1=1;
			IN2=0;
			IN3=1;
			IN4=0;
		}
	}
}	

void special3(void)  //中间和左边传感器同时检测到黑线
{
	if(k1==1&&k2==1&&k3==0)
	{
		delay_us(1);
		if(k1==1&&k2==1&&k3==0)
		{
			speedleft=79;
			speedright=79;
			IN1=1;
			IN2=0;
			IN3=1;
			IN4=0;
		}
	}		
}

void special4(void)  //三个传感器同时检测到黑线，为不可能事件
{
	if(k1==1&&k2==1&&k3==1)
	{
		delay_us(1);
		if(k1==1&&k2==1&&k3==1)
		{
			IN1=1;
			IN2=0;
			IN3=1;
			IN4=0;
		}
	}		
}
