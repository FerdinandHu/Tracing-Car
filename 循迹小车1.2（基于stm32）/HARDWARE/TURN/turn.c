#include "motor.h"
#include "delay.h"
#include "sys.h"
#include "pwm.h"
#include "turn.h"



void gostraight(void)  //ֱ�ߺ���
{
	if(k1==0&&k2==1&&k3==0)  //�ж��м䴫�����Ƿ�ѹ��
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

void turnleft(void)  //��ת����
{
	if(k1==1&&k2==0&&k3==0)  //�ж���ߴ������Ƿ�ѹ��
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

void turnright(void)  //��ת����
{
	if(k1==0&&k2==0&&k3==1) //�ж��ұߴ������Ƿ�ѹ��
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

void special1(void)  //���Ҵ�����ͬʱ��⵽���ߣ�Ϊ���������
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

void special2(void)  //�м���ұߴ�����ͬʱ��⵽����
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

void special3(void)  //�м����ߴ�����ͬʱ��⵽����
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

void special4(void)  //����������ͬʱ��⵽���ߣ�Ϊ�������¼�
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
