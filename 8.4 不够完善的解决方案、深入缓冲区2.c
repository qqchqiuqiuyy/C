#include <stdio.h>

int main()
{
	int guess = 1;
	printf("脑海里想一个1到20的数，我会尝试猜\n");
	printf("你只需要输入小写y或n告诉我猜中了没\n");
	printf("嗯...这个数是1么?\n");
	while (getchar() != 'y')
	{
		printf("那么...这个数是%d么?\n", ++guess);
		getchar();
	}
	printf("我就知道哈哈^_^\n"); 
	return 0; 
}

/*
	在循环内加一个getchar()去读取换行符
	
	然而这种办法仍有缺陷
	当遇到输入nnnnn时，缓冲区为
	[n][n][n][n][n][\n]
	第一次循环会读掉前两个n，输出第1次
	[n][n][n][\n]
	第二次循环会读掉中间两个n，输出第2次
	[n][\n]
	第三次循环会读掉剩余两个字符，输出第3次
	
	此外，它不能防y和n以外的字符读入，同样会导致循环继续。 
*/ 
