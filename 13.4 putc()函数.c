#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE * fp = fopen("test4.txt", "w");
	if (!fp)
	{
		printf("文件打开失败！\n");
		exit(1);
	}
	char ch; 
	while((ch = getchar()) != EOF)
		putc(ch, fp);
	fclose(fp);
	return 0;
}

/*
	putc()函数的原型如下：
	int putc(int _Ch,FILE *_File); 
	而putchar()函数的原型如下：
	int putchar(int _Ch);
	同样也是多了FILE指针，朝该文件指针指向的文件输出一个字符 

*/ 
