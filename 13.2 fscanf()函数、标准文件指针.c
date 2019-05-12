#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE * fp = fopen("test2.txt", "r");
	char ch;
	if (!fp)
	{
		printf("打开test2.txt失败！\n");
		exit(1);
	}
	int a, b;
	fscanf(fp,"%d%d",&a, &b);
	printf("%d + %d = %d", a, b, a + b);
	fclose(fp);
	return 0;
}

/*
	运行程序前先创建test2.txt，然后在文档内输入两个数并保存即可。 

	fscanf()函数的原型如下：
	int fscanf(FILE * _File,const char * _Format,...);
	
	而scanf()函数的原型如下：
	int scanf(const char * _Format,...); 
	
	同样只是多了要传入一个FILE指针而已，其余参数、返回值、功能基本一致 
	
	标准文件指针
	标准输入 的文件指针是 stdin，用于读取键盘输入
	标准输出 的文件指针是 stdout，用于往显示器输出内容
	标准错误 的文件指针是 stderr，为输出错误信息需要使用独立的输出流以防标准输出卡住 
*/ 
