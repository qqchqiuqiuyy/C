#include <stdio.h>

int main()
{
	int guess = 1;
	printf("脑海里想一个1到20的数，我会尝试猜\n");
	printf("你只需要输入小写y或n告诉我猜中了没\n");
	printf("嗯...这个数是1么?\n");
	while (getchar() != 'y')
		printf("那么...这个数是%d么?\n", ++guess);
	printf("我就知道哈哈^_^\n"); 
	return 0; 
}

/*
	分析缓冲区 
	当你输入n后回车
	缓冲区如下: 
	[n][\n] 
	getchar()读取第一个字符n，然后进入循环输出语句，此时缓冲区为:
	[\n]
	因为还留存一个换行符，getchar()跳过用户输入，读取了\n，又进入
	了循环输出语句。至此，循环进行了两次 

*/ 
