#include <stdio.h>

int main()
{
	const int ROWS = 6;
	const int CHARS = 6;
	int row;
	char ch;
	
	for (row = 0; row < ROWS; row++)
	{
		for (ch = ('A') + row; ch < ('A' + CHARS); ch++)	//此处的初值随外部循环的迭代变化，但条件表达式不变 
			printf("%c",ch);
		printf("\n");
	}
	return 0;
	
	//通常不规则嵌套循环的形成原因有两种：
	//1.内部循环的初值随外部循环的变化而影响
	//2.内部循环的表达式随外部循环的变化而影响 
}
