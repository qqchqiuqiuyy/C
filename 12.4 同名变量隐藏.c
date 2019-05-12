#include <stdio.h>

int num = 1;

void func();

int main()
{
	printf("num = %d &num = %p\n", num, &num);
	int num = 2;
	printf("num = %d &num = %p\n", num, &num);
	
	//一个代码块 
	{
		int num = 3;
		printf("num = %d &num = %p\n", num, &num);
		
		while (--num == 2)	//此处是对值为3的num进行操作比较 
		{	
			int num = 4;
			printf("num = %d &num = %p\n", num, &num);
			func();
		}
	}
	
	
	
	return 0;
	
}

void func()
{
	int num = 5;
	printf("num = %d &num = %p\n", num, &num);
}

/*
	当代码块内部声明了变量时，它会隐藏掉在代码块外部的同名变量，然后使用该变量。
	尽量避免出现这种情况 
*/
