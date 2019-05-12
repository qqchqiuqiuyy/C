#include <stdio.h>
int main()
{
	char ch;				//要打印的字符 
	int rows, cols;		//行数和列数 
	int i, j;
	int s_s;			//成功输入个数
	char invaild_ch;    //非法字符 
	printf("输入要打印的字符、打印的行数和列数: \n");
	while ((ch = getchar()) != '\n')
	{
		while ((s_s = scanf("%d%d",&rows, &cols)) != 2 || rows < 0 || cols < 0)	//防止输入非法字符、负数的行数或列数 
		{
			while ((invaild_ch = getchar()) != '\n')	//清空缓冲区的同时输出非法字符 
				putchar(invaild_ch);
			if (s_s != 2)
				printf("不是一个数！请重新输入打印的行数和列数: \n");
			else
				printf("行数和列数不应为负数!(当前输入的行数为%d列数为%d)\n"	//输出太长可以这样断句换行 
				"请重新输入打印的行数和列数: \n", rows, cols); 
		}
		
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
