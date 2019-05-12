#include <stdio.h>
#include <stdlib.h>		//使用atoi()函数

int main()
{
	int num1 = atoi("42");			//num1是42 
	int num2 = atoi("-35.2");		//num2是-35 
	int num3 = atoi("17qfjkfd");	//num3是17 
	int num4 = atoi("sdfjk");		//num4是0
	printf("%d\n", atoi("jk123")); 
	int num5 = atoi("2147483648");	//数字过大，不同编译器有不同实现。比Dev-C++的是会上溢，VS的会控制最大值为INT_MAX 
	printf("%d %d %d %d %d", num1, num2, num3, num4, num5);
	puts("");
	
	double num6 = atof("13");		//num6是13.0
	double num7 = atof("13.25");	//num7是13.25
	double num8 = atof("-25.5asjioffds");	//num8是-25.5
	double num9 = atof("3.3333333333 / 3");	//num9是3.333333
	double num10 = atof("5.3e-2");	//num10是0.053000
	double num11 = atof("1.0e1000");	//num11过大导致上溢，结果是无穷大
	double num12 = atof("1.0e-1000");	//num12过小导致下溢，结果是无穷小 
	 
	
	printf("%f %f %f %f %f %f %f", num6, num7, num8, num9, num10, num11, num12); 
	return 0;	
} 

/*
	atoi()函数位于头文件stdlib.h内，函数原型是：
	int atoi(const char * _Str);
	提供一个字符串，将其转换成int
	①如果字符串第一个字母不是数字或负号，则可能返回0
	②如果字符串开头是数字或负号，它将一路读取数字字符直至遇到非数字字符或'\0'结束 

	atof()函数位于头文件stdlib.h内，函数原型是：
	double atof(const char * _Str);
	提供一个字符串，将其转换成double
	①如果字符串第一个字母不是数字或负号，则可能返回0.0
	②如果字符串开头是数字或负号，它将一路读取数字字符(包括第一个小数点及e)直至遇到非数字字符或'\0'结束 
*/ 
