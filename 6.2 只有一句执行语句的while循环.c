#include <stdio.h>

int main()
{
	printf("输入一个整数n求从1加到n的和: ");
	int n, i = 0, sum = 0;	//很多人都没有把sum赋初值0就随便拿去做四则运算，这是不对的！！ 
	scanf("%d",&n);
	while (++i <= n)	//首先while循环要检查表达式的真假，i就会先自增1再拿来与n做比较 
		sum += i;
	printf("1+2+...+%d = %d\n",n,sum);
	return 0;
}
