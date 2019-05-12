#include <stdio.h>

#define SEC_PER_MIN 60  //#define是宏定义语句，定义SEC_PER_MIN为60 
						//在编译过程中若遇到SEC_PER_MIN文本符，将替换成60 
						//所以编译器是不认识SEC_PER_MIN这个东西的，也不属于
						//变量名范畴 
int main()
{
	int sec, min, left;
	
	printf("输入要转化的秒数: ");
	scanf("%d",&sec);
	min = sec / SEC_PER_MIN;	//编译时变成min = sec / 60;
	left = sec % SEC_PER_MIN;
	printf("%d秒 = %d分 %d秒\n",sec,min,left); 
	
	//取余运算符去求被除法截去的剩余部分，如
	//  11 / -5 = -2，那么 11 % -5 =  1
	// -11 /  5 = -2，那么 11 % -5 = -1
	//  11 /  5 =  2，那么 11 %  5 =  1
	// -11 / -5 =  2，那么-11 % -5 = -1  
}
