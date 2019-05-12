#include <stdio.h>



int main()
{
	int apples = 3.0;  //不好的做法，这是用浮点数赋给int，会做隐式转换
	int cost = 12.99;  //更不好的做法，赋给cost时，会截断后面的0.99(不是四舍五入！)，做隐式转换
	float pi = 3.1415926536;  	//用一个double变量赋给float，会做隐式转换。
								//由于float的精度只保证小数后6位是精确的，后面的小数位就无法保证了
	float f = 2.33f;    	//由于小数常量默认是double，这时在2.33后面加上f或F保证它是一个float常量，避免不必要的隐式转换
	long l = 24l;			//而整数默认是int，这时在24后面加上l或L保证它是一个long常量，当然问题也不大
	unsigned long us = 233ul;	//ul后缀表示该数为unsigned long 
	short sh = 200000;		//赋给的整数太大，会发生截断，丢失前面超出的位，变成3392(自己算) 
							//dev-c++编译器提示: [Warning] overflow in implicit constant conversion[-Woverflow]  
	printf("%hd\n",sh);
	
	return 0; 
}
