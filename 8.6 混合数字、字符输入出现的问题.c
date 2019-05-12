#include <stdio.h>

int main()
{
	int ch;				//要打印的字符 
	int rows, cols;		//行数和列数 
	int i, j;
	printf("输入要打印的字符、打印的行数和列数: \n");
	while ((ch = getchar()) != '\n')
	{
		scanf("%d%d",&rows, &cols);
		for (i = 0; i < rows; ++i)
		{
			for (j = 0; j < cols; ++j)
				putchar(ch);
			putchar('\n');
		}
		printf("再次输入另一个要打印的字符、打印的行数和列数\n");
		printf("或者直接按回车结束\n"); 
	} 
	printf("再见!\n");
	return 0;
}

/*
	当你第一次输入的时候，程序能正常打印出矩形字符阵，但是随后却跳出了循环，这肯定不是我们想要的结果。
	分析缓冲区
	输入* 3 5后回车:
	[*][ ][3][ ][5][\n]
	getchar()函数读到*后剩余 
	[ ][3][ ][5][\n]
	scanf()函数跳过空格，读到两个数后剩余 
	[\n]
	执行完后，回到循环开头，getchar()函数读到了最后的那个\n，这是导致循环结束的原因
*/ 
