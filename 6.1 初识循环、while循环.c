#include <stdio.h>

int main()
{
	int count_down = 5;
	while (count_down > 0)
	{
		printf("%d\n",count_down);	//或者该行count_down加上后缀--并删去下面那行语句也行 
		--count_down;
	}
	printf("Welcome to the Chapter 5: Loop!!!\n");
	return 0; 
}

/*   while循环有两种结构：
	
	while (expression)
		statement
		
	//或者
	while (expression)
	{
		statements
	}
	
	当expression的结果值为true(1)时，执行语句或代码块
*/ 
