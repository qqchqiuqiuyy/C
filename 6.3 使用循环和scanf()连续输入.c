#include <stdio.h>

int main()
{
	int num, sum = 0;
	printf("连续加法器 请输入一个整数<输入q结束>: ");
	while (scanf("%d",&num))	//只要输入成功，scanf的返回值就是1，即结果为true，执行代码块；反之为0，结束循环 
	{
		sum += num;
		printf("请再输入一个整数<输入q结束>: ");
	}
	printf("总和为 %d",sum);
	return 0;
	//如果要保证scanf内所有变量都成功写入才进行循环，那么表达式就应像这样: scanf("%d%d%d",&a,&b,&c) == 3
	//如果只需要有数据写入就进行循环，表达式直接: scanf("%d",&num) 
}
