#include <stdio.h>

#define PI 3.141592653    	//����һ�ֶ��峣���İ취�����ų���ͨ��ȫ��д(�淶) 

const double Pi = 3.141592653;	//const�޶���ʹ���������ǳ������������Ҫ�г�ʼ�����˺󶼲������޸�����ֵ
//������������ĸΪ��д(�淶) 
int main()
{
	double area, circum, radius;	//������ܳ����뾶
	
	printf("What is the radius of your pizza?(cm)\n");
	scanf("%lf",&radius);
	
	area = PI * radius * radius;	//ʹ�÷��ų���PI
	circum = 2.0 * Pi * radius;		//ʹ�ó�����Pi
	
	printf("Your pizza parameters are as follows: \n");
	printf("circumference = %.2fcm, area = %.2fcm^2\n",circum,area);
	
	return 0; 
	 
	//ͨ�����Ƽ�ʹ��#define�����峣��������ʹ��const�޶����������ų���(�������ֱ����ǿ���ȡ��ַ��)
		
	
} 
