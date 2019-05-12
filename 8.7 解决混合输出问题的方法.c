#include <stdio.h>
#include <stdbool.h>
int main()
{
	int ch;				//要打印的字符 
	int rows, cols;		//行数和列数 
	int i, j;
	printf("输入要打印的字符、打印的行数和列数: \n");
	while ((ch = getchar()) != '\n')
	{
		if (scanf("%d%d",&rows, &cols) != 2)	//如果两个变量都没有成功读取值，则应结束循环 
			break;
		for (i = 0; i < rows; ++i)
		{
			for (j = 0; j < cols; ++j)
				putchar(ch);
			putchar('\n');
		}
		printf("再次输入另一个要打印的字符、打印的行数和列数\n");
		printf("或者直接按回车结束\n");
		
		while (getchar() != '\n')		//将留在缓冲区的字符清空 
			continue; 
	} 
	printf("再见!\n");
	return 0;
}


