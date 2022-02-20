#ifndef __SERVO_H
#define __SERVO_H
#include "sys.h"

#define angle0 TIM_SetCompare1(TIM3 , 195);		//0��
#define angle45 TIM_SetCompare1(TIM3 , 190);	//45��
#define angle90 TIM_SetCompare1(TIM3 , 185);	//90��
#define angle135 TIM_SetCompare1(TIM3 , 180);	//135��
#define angle180 TIM_SetCompare1(TIM3 , 175);	//180��

void pwm_init();


#endif



