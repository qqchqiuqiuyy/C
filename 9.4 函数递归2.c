#include <stdio.h>

long long fact_loop(int n);		//循环计算阶乘 
long long fact_recurse(int n);	//递归计算阶乘 

int main()
{
	int num;
	printf("输入一个数(0-20)求它的阶乘(q结束): ");	//由于long long的限制，最大能保证20!正常储存 
	while (scanf("%d",&num))
	{
		if (num > 20)
			printf("抱歉，不要超过20\n");
		else if (num < 0)
			printf("抱歉，不接受负数\n");
		else
		{
			printf("使用循环法 %d! = %lld\n", num, fact_loop(num));
			printf("使用递归法 %d! = %lld\n", num, fact_recurse(num));
		}
		printf("输入一个数(0-20)求它的阶乘(q结束): ");
	}
	return 0; 
	
}

long long fact_recurse(int n)
{
	if (n > 0)
		return fact_loop(n - 1) * n;	//确保每一个分支都要有返回值！ 
	else
		return 1;
}

long long fact_loop(int n)
{
	long long ans = 1;
	int i;
	for (i = 1;i <= n;++i)
		ans *= i;
	return ans;		
}
