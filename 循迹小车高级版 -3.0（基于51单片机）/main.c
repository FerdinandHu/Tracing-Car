#include<reg52.h>
typedef  unsigned char u8;
typedef  unsigned int u16;

sbit ENA=P1^0;		  //����˿�
sbit IN1=P1^1;
sbit IN2=P1^2;
sbit IN3=P1^3; 
sbit IN4=P1^4;
sbit ENB=P1^5;
sbit k1=P3^2;
sbit k2=P3^3;
sbit k=P3^4;

u16 i=0;		   //����һЩ��������
u16 j=0;
u16 a;
u16 b;
u16 t=0;

void turnleft();		//���庯��
void turnright();
void gostright();
void delay(u16);
void timestart();
void startup();
void special1();
void special2();
void special3();
void special4();

void startup()		//��ʼ������
{
	IN1=1;
	IN2=0;
	IN3=1;
	IN4=0;
	a=25;
	b=25;

}

void timestart()   //��ʱ��׼������
{
	TMOD=0x22;
	TH0=0x9c;
	TL0=0x9c;
	TH1=0x9c;
	TL1=0x9c;
	EA=1;
	ET0=1;
	TR0=1;
	ET1=1;
	TR1=1;
}

timer1 () interrupt 1  //��ʱ�жϺ���1,���ڿ��������ٶ�
{
	i++;
	if(i<a)
	{
		ENA=1;
		
	}
	else if(i==100)
	{
		ENA=1;
		i=0;
	}
	else
	{
		ENA=0;
	}	
}

timer2 () interrupt 3  //��ʱ�жϺ���2,���ڿ��������ٶ�
{
	j++;
	if(j<b)
	{
		ENB=1;
		
	}
	else if(j==100)
	{
		ENB=1;
		j=0;
	}
	else
	{
		ENB=0;
	}	
}

void gostraight()	  //�м䴫����ѹ�ߣ�ֱ�к���
{
	if(k1==0&&k==1&&k2==0)
	{
		delay(100);
		if(k1==0&&k==1&&k2==0)
		{
			a=21;
			b=21;
			IN1=1;
			IN2=0;
			IN3=1;
			IN4=0;
		}
	}
}

void turnleft()		   //�ж���ߴ������Ƿ�ѹ��
{
	if(k1==1&&k==0&&k2==0)
	{
		delay(100);
		if(k1==1&&k==0&&k2==0)
		{
			a=21;
			b=21;
			IN1=1;
			IN2=1;
			IN3=1;
			IN4=0;
		}
	}
}

void turnright()	  //�ж��ұߴ������Ƿ�ѹ��
{

	if(k1==0&&k==0&&k2==1)
	{
		delay(100);
		if(k1==0&&k==0&&k2==1)
		{
			a=21;
			b=21;
			IN1=1;
			IN2=0;
			IN3=1;
			IN4=1;
		}
	}	
}
void special1()	 //ȫ��
{
	if(k1==0&&k==0&&k2==0)
	{
		delay(100);
		if(k1==0&&k==0&&k2==0)
		{
			a=21;
			b=21;
			IN1=1;
			IN2=0;
			IN3=1;
			IN4=0;
		}
	}		
}

void special2()	 //����
{
	if(k1==1&&k==1&&k2==0)
	{
		delay(100);
		if(k1==1&&k==1&&k2==0)
		{
			a=21;
			b=21;
			IN1=1;
			IN2=0;
			IN3=1;
			IN4=0;
		}
	}
}

void special3()	 //������
{
	if(k1==1&&k==1&&k2==1)
	{
		delay(100);
		if(k1==1&&k==1&&k2==1)
		{
			a=21;
			b=21;
			IN1=1;
			IN2=0;
			IN3=1;
			IN4=0;
		}
	}
}

void special4()		 //����
{
	if(k1==0&&k==1&&k2==1)
	{
		delay(100);
		if(k1==0&&k==1&&k2==1)
		{
			a=21;
			b=23;
			IN1=1;
			IN2=0;
			IN3=1;
			IN4=0;
		}
	}	
}


void delay(u16 t)	//�Ӷ�ʱ������������PWM��
{
	while(t--);
}

void main()
{	
	startup();	//��ʼ��
	while(1)
	{
		timestart();  
		gostraight();
		turnleft();
		turnright();
		special1();
		special2();
		special3();
		special4();
	}
}			
