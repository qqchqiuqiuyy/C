#include <stdio.h>

int main()
{
	char ch;
	int i;
	float fl;
	fl = i = ch = 'A';	//自动类型转换(隐式转换)使得接受类型不符的变量时进行处理
						//并转换成合适的类型 
	printf("ch = %c, i = %d, fl = %.2f\n",ch,i,fl);
	i = 35.5;
	ch = 5212205;
	printf("i = %d, ch = %c\n",i,ch);
	
	i = (int) 3.44 + (int) 2.99999999;   //强制类型转换(显式转换)用法为: (type) value，使其先转换成指定变量类型
	//这里(int) 3.44为3，(int) 2.99999999为2
	//首要提醒:不能将指针变量转换成整型，也不能将整型转换成指针变量
	printf("%d",i);
	
}
