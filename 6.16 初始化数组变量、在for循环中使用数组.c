#include <stdio.h>
#define SIZE 10

int main()
{
	int i, score[SIZE];		//整数数组的声明 
	int sum = 0;	//勿忘初始化
	double average;
	
	printf("输入%d门课程的成绩: \n", SIZE);
	for (i = 0;i < SIZE;i++)
		scanf("%d",&score[i]);	//这里是对元素score[i]取地址
	//这个循环使得可以读取10个整数值，因此你可以一次性输入10个整数，实际上相当于：
	// scanf("%d%d%d%d%d%d%d%d%d%d",&score[0],&score[1],&score[2],&score[3],&score[4],&score[5],&score[6],&score[7],&score[8],&score[9]); 
	//使用循环特别适用于输入数组元素 
	printf("这些都是你输入的成绩值:\n");
	for (i = 0;i < SIZE;i++)
		printf("%5d",score[i]);
	//使用循环特别适用于输出数组元素
	printf("\n");
	//连续输出完后不要忘记换行 
	for (i = 0;i < SIZE;i++)
		sum += score[i];
	//同样使用循环将每个元素的值加给sum
	average = (double) sum / SIZE;	//注意sum是int值，要强制转换成double型
	printf("总成绩为%d, 平均分为%.2lf\n",sum,average);
	
	return 0; 
}

/* 数组声明的方法：
	type 变量名[可容纳元素的个数]; 
	例如：
	int nums[10];	//声明了一个int数组，可以容纳10个整数 
	char str[10];	//声明了一个char数组，可以容纳10个字符(但最后一个必须预留给'\0')
	
	访问数组元素的方法： 
	所有的数组元素都是通过索引号来标记位置的，且一定是从索引号0开始(表示第一个元素)
	nums[0] 	   //第一个元素
	nums[4] = 5;   //对第五个元素赋值 
	&nums[5]       //对第六个元素取地址 
	nums[10]	   //错!nums只有10个元素，而这里尝试访问第11个元素 
	 


*/ 
