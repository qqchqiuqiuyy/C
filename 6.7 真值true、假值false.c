#include <stdio.h>

int main()
{
	int true_val = (10 > 2);		//一般而言，表达式如果为真，则其结果值为1  
	int false_val = (10 < 2);		//而如果表达式为假，其结果值为0
	/*
		while(1)
		{
			statements;		//通常这种循环是永真式循环(死循环) 
		}
		
		while(0)
		{
			statements;		//循环内语句将永远不会执行
		}
	
	*/ 
	int n = 3;
	printf("...\n");
	while (n)
		printf("值%d是true\n",n--);
	printf("值%d是false\n\n",n);
	
	
	n = -3;
	printf("...\n");
	while (n)
		printf("值%d是true\n",n++); 
	//C语言规定任何非零数(x≠0 | x∈R) 都是真值true，0是假值false	
	return 0;
} 
