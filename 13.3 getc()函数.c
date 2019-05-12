#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE * fp = fopen("test3.txt", "r");
	if (!fp)
	{
		printf("文件打开失败！\n");
		exit(1);
	}
	char ch; 
	while((ch = getc(fp)) != EOF)
		putchar(ch);
	fclose(fp);
	return 0;
}

/*
	getc()函数原型如下：
	int getc(FILE *_File); 
	而getchar()函数原型如下：
	int getchar(void); 
	相比getchar()仅需多传入一个FILE指针即可
	从文件流读取一个字符并返回之 

*/
