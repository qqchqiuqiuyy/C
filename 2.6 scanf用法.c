#include <stdio.h>

int main()
{
	int a;
	printf("How many carrots");		//&为取址运算符，取出变量所在的内存地址的值 
	printf(" do you have?\n");		//这行输出紧跟s后面 
	scanf("%d",&a);					/*将键盘输入的值(要按照字符串内格式输入符号的形式提供)
									  传递给变量a(写入a所在的内存地址) */ 
	a = a - 1;                    	//令变量a的值减1 
	printf("Now you have %d carrots.\n",a);	
	//scanf和printf的用法很像，但区别在scanf要提供变量地址，printf只提供变量的值 
	return 0;
}
