#include <stdio.h>

long long Fibonacci(int n);	//递归输出n的二进制数 

int main()
{
	int num;
	printf("输入一个非负数，程序将输出斐波那契数列第n项(q结束): ");
	while (scanf("%lld",&num))
	{
		if (num < 0)
			printf("抱歉，仅接受非负数");
		else
			printf("第%d项是 %lld", num, Fibonacci(num));
		printf("\n输入一个非负数，程序将输出斐波那契数列第n项(q结束): ");
	}
	return 0; 
}

long long Fibonacci(int n)
{
	if (n == 0)
		return 0; 
	if (n <= 2)
		return 1;
	else
		return Fibonacci(n - 1) + Fibonacci(n - 2);
}

/*
	斐波那契数列为{1,1,2,3,5,8,13,21, ...} 
	从第41项起，程序的计算时间居然要1s，而且n每增加1，计算时间就要增加50%-100%
	斐波那契数列递推公式是 F(n) = F(n - 1) + F(n - 2) 
						   F(0) = F(1) = 1
	n = 5时，递归图是
		 ② 
	F(5)←←F(3)←F(1) 
	↓↑→↗↓↑→↗ 
  ①↓↑    F(2)
	↓↑
	F(4)←F(2) 
	↓↑→↗
	↓↑
	F(3)←F(1) 
	↓↑→↗
	↓↑ 
	F(2)
	 
	 从①方向开始，从②方向结束，函数也是从F(5)开始，F(5)结束，一共进行了8次递归！
	 事实上，当n = 1或2时，不进行递归，当n > 2时，该函数将进行2^(n-2)次递归，也就是递归次数呈指数性增长！
	 所以当n是40时，实际上已经进行了2^38次递归了！每一次递归还会多占用一份变量n的内存！ 
	 所以使用斐波那契递推公式并不是一种好的办法 
*/ 
