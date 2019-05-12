#include <stdio.h>

int main()
{
	const int start_cost = 7;
	const double cost_per_km = 1.5;
	int km;
	double cost;
	printf("  km  cost\n");
	for (km = 0, cost = start_cost; km <= 15; km++, cost += cost_per_km)
		printf("%4d%6.1lf\n", km, cost);
	//使用逗号运算符可以使得循环体可以存放多个初始赋值或更新表达式
	//注意！  int a = 1, b = 2, c;   
	//		  printf("%d%d",a,b);
	//这里的逗号都只是分隔符，而不是运算符 
	
	return 0;
	
}
