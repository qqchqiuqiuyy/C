#include <stdio.h>

#define PI 3.141592653    	//这是一种定义常量的办法，符号常量通常全大写(规范) 

const double Pi = 3.141592653;	//const限定符使其声明的是常变量，其必须要有初始化，此后都不能再修改它的值
//常变量的首字母为大写(规范) 
int main()
{
	double area, circum, radius;	//面积，周长，半径
	
	printf("What is the radius of your pizza?(cm)\n");
	scanf("%lf",&radius);
	
	area = PI * radius * radius;	//使用符号常量PI
	circum = 2.0 * Pi * radius;		//使用常变量Pi
	
	printf("Your pizza parameters are as follows: \n");
	printf("circumference = %.2fcm, area = %.2fcm^2\n",circum,area);
	
	return 0; 
	 
	//通常不推荐使用#define来定义常量，建议使用const限定符创建符号常量(而且这种变量是可以取地址的)
		
	
} 
