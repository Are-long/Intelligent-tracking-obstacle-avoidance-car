#include"delay.h"	
#include"motor.h"		//���
#include"servo.h"		//���
#include"sensor.h"	//���⴫����
#include"cs.h"			//������������
#include"led.h"			//ָʾ��
int main(void)
 {	int a=1;
		char 	str[20];        //������Ÿ������ַ�	
		float length_res[5];  //������Ų����
	 
		NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//�ж����ȼ�
	 
		delay_init();	    		//��ʱ������ʼ��	  
	  motor_init();					//���������ʼ��
		Sensor_Init();			 	//��ʼ������⴫�������ӵ�Ӳ���ӿ�
		pwm_init();  					//���pwm	    		TIM3
		CH_SR04_Init();  			//��������ʱ��    	TIM4
		Senor_Using(); 				//��ຯ����ʼ��
		NVIC_Config();				//�жϺ�����ʼ��

	while(1)
	{	

{	//ѭ��ģ��
	//SENSOR0 0==��		SENSOR1 0==��	 	SENSOR2 0==��


				while(1)		//δ��⵽�ϰ��ѭ��
				{
					angle90;//�������
				if(SENSOR0 ==1 && SENSOR1==0 && SENSOR2 ==1 )//ʮ�ֻ�ֹͣ������Ϊ��ʮ��
				{
					go();
				}
				 if(SENSOR0 ==0 && SENSOR1==0 && SENSOR2 ==0)//ֱ��
				{
					go();
				}
				 if(SENSOR0 ==1 && SENSOR1==0 && SENSOR2 ==0)//��ֱ��
				{
						go();
						delay_ms(150);
						left();
						delay_ms(200);
				}
				 if(SENSOR0 ==1 && SENSOR1==1 && SENSOR2 ==0)//�������ƫ
				{
					sleft();
		
				}
				 if(SENSOR0 ==0 && SENSOR1==0 && SENSOR2 ==1)//��ֱ��
				{
					go();
					delay_ms(150);
					right();
					delay_ms(200);
				}
				 if(SENSOR0 ==0 && SENSOR1==1 && SENSOR2 ==1)//�һ������ƫ
				{
					sright();
	
				}
				if(a==1&&distance<=25)
					break;
				
				}
}		
/******************************************************************************/
{	//����ģ��		
			while(distance<=25)
			{a=0;
					if(SENSOR0!=1||SENSOR1!=0||SENSOR2!=1)		//��⵽�ϰ������
					{	

						stop(); 
					
						angle135;      //�����ת45�Ȳ��
						delay_ms(200);		
		
						angle45;     	//�����ת45�Ȳ��
						delay_ms(200);	
			
						angle90;
						left();
						delay_ms(400);
						
						stop();
						delay_ms(100);
						usright();
				
					}
							if(SENSOR0==1||SENSOR1==0||SENSOR2==1)
							{	stop();
								delay_ms(100);
								left();
								delay_ms(200);
								break;
							}
						
					
					
				}	
	
			}
			
	}			
}	



		
		  			
	 
