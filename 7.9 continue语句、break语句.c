#include <stdio.h>
int main()
{
	double score, max = 0.0, min = 100.0, sum = 0.0;	//这里得保证初始max为最小的值，初始min为最大的值 
	int n = 1;	//裁判号
	printf("五位裁判给选手打分:\n"); 
	printf("1号裁判打分(0.0 - 100.0): ");
	while (scanf("%lf",&score) == 1)
	{
		if (score < 0.0 || score > 100.0)
		{
			 printf("请重新输入打分(0.0 - 100.0)<q结束>:");
			 continue;	//continue语句将跳过下面的所有语句(不执行)，回到循环的条件表达式检测(此操作会触发更新表达式) 
		}
		
		max = score > max ? score : max;
		min = score < min ? score : min;
		sum += score;
		
		if (n >= 5)
			break;	//break语句将直接强制跳出该层循环 
		printf("%d号裁判打分(0.0 - 100.0): ", ++n); 
	} 
	
	sum -= max + min;	//去掉一个最低分和最高分
	sum /= n - 2;		//计算平均分
	printf("去掉一个最低分: %.1lf\n", max);
	printf("去掉一个最高分: %.1lf\n", min);
	printf("平均分是: %.1lf\n", sum);
	return 0; 
}
