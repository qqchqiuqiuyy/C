#include<stdio.h>

int main()
{
	int chinese, math, english;
		//一次性声明三个变量 
	printf("Enter your score of Chinese,Maths and English: ");
	scanf("%d%d%d",&chinese,&math,&english);
		//一般要连续输入多个变量时，直接将%d并排在一起即可,在输入时用空格隔开 
	printf("Your total score is %d\n",chinese + math + english);
		//输出物不仅可以是变量，还可以是表达式 
	printf("Frank's total score is %d and Lee scores %d",336,344);
		//更可以是一个常量 
	return 0;
}
