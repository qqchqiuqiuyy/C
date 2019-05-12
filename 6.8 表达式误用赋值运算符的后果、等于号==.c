#include <stdio.h>

int main()
{
	int sum = 0, num, success_input;
	printf("输入一个整数用于求和<q结束>：");
	success_input = scanf("%d",&num);
	while (success_input = 1)	//注意!这里应该是success_input == 1 
	{
		sum += num;
		printf("输入一个整数用于求和<q结束>：");
		success_input = scanf("%d",&num);
	}
	printf("总和是%d\n",sum);
	return 0;
	
}
