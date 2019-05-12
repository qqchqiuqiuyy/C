#include <stdio.h>
#include <math.h>		//使用fabs()函数——返回浮点数的绝对值 

int main()
{
	const double Pi = 3.14159;
	double response;
	printf("What is the value of pi?\n");
	scanf("%lf",&response);			//再说明！输入double值用格式符%lf 
	while (fabs(response - Pi) > 0.00001)	//由于浮点数精度不可避免的误差，所以要比较两个数是否相等， 
	{										//请比较二者之差的绝对值是否小于等于10e-6
		printf("Try again!\n");
		scanf("%lf",&response);
	}
	printf("close enough!\n");
	return 0;
	
}

/* 常见关系运算符如下：
	运算符			含义
	 <				小于
	 <=				小于或等于
	 ==				等于
	 >=				大于或等于
	 >				大于
	 !=				不等于 
	 
	注意！！！等号是 ==  赋值运算符是 =  请不要搞混！ 


*/ 

