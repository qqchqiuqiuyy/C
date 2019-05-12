#include <stdio.h>

int main()
{
	int n;
	const int N = 10;
	printf("n   n^2   n^3\n");
	for (n = 1; n <= N; ++n)
	{
		printf("%-4d%-6d%-8d\n", n, n * n, n * n * n);
	}
	//for循环执行顺序是:检查条件表达式是否为真、执行语句、表达式更新变量 
	
	/*for循环结构如下
	 	
		 for (变量赋初值(可以不要);入口条件表达式(expression);更新变量表达式(update expression))
			语句(statement)或代码块(statements)
			
		其中变量赋初值和更新变量可以是空的，如:
		int n = 1;
		for (;n <= N;++n)
		{
			printf("%-4d%-6d%-8d\n", n, n * n, n * n * n);
		}
		
		甚至是
		int n = 1;
		for (;n <= N;)
		{	
			printf("%-4d%-6d%-8d\n", n, n * n, n * n * n);
			++n;
		}
		
		当然建议是填满三个区域
		
		其中更新变量还可以是不止自递增/减，还可以是如x += 3啊 任何能使变量状态能够改变的表达式 
		
		for循环比其余循环都要强大，可以代替while使用，因为它比while更详细叙述 
		
		注意：C语言中for循环不能在变量赋初值区域声明变量！！ 
	*/
	return 0;
}
