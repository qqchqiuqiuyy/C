#include <stdio.h>
#include <ctype.h>
/*
	? :运算符是一个三元运算符，通过对条件的判断决定表达式的结果值为二者之一，用法: 
	expression1 ? expression2 : expression3 
	
	当expression1为真时，结果值为expression2，反之为expression3 
*/ 

int main()
{ 
	
	int a = -3, b = -5;
	
	int max = a > b ? a : b;		//用于找到最大值赋给max 
	//等价于
	//int max;
	//a > b ? max = a : max = b; 
	printf("max = %d\n",max);
	
	int abs_a = a > 0 ? a : -a;		//用于取绝对值，当a为负数时abs_a被赋-a
	printf("abs_a = %d\n",abs_a);
	
	int lowers = 0, uppers = 0;			//统计大小写字母的示例 
	char ch = 'C';
	islower(ch) ? ++lowers : ++uppers;	//表达式可以直接修改变量值 
	printf("lowers = %d, uppers = %d\n", lowers, uppers);
	
	 
}
