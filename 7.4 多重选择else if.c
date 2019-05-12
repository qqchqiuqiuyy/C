#include <stdio.h>

int main()
{
	unsigned score;
	printf("输入你的成绩(0 - 100分): ");
	scanf("%d",&score);
	if (score < 0)
		printf("你输入的成绩不合法\n");
	else if (score < 60)
		printf("你的评级是F\n");
	else if (score < 70)		//能来到这里说明score >= 60 
		printf("你的评级是D\n");
	else if (score < 80)		//能来到这里说明score >= 70
		printf("你的评级是C\n");
	else if (score < 90)		//能来到这里说明score >= 80
		printf("你的评级是B\n");
	else if (score <= 100)		//能来到这里说明score >= 90
		printf("你的评级是A\n");
	else						//能来到这里说明score > 100
		printf("你输入的成绩不合法\n");
	return 0;
}
