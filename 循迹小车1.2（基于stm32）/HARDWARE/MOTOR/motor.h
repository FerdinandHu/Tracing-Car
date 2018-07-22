#ifndef __MOTOR_H
#define __MOTOR_H
#include "sys.h"
#define ENA PAout(8)
#define ENB PAout(9)
#define IN1 PCout(0)
#define IN2 PCout(1)
#define IN3 PCout(2)
#define IN4 PCout(3)
#define k1 PBin(0)
#define k2 PBin(1)
#define k3 PBin(2)

void MOTOR_Init(void);


#endif

