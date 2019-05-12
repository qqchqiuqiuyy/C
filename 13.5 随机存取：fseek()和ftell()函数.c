#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch;
	char reverse[1000] = {0};
	long last_pos, count;
	FILE * fp = fopen("test5.txt", "r+");	
	if (!fp)
	{
		printf("打开失败。\n");
		exit(EXIT_FAILURE);
	}
	
	while ((ch = getc(fp)) != 'W')
		putc(ch, stdout);
	putchar('\n');
	
	printf("当前文件指针指向了文件test5.txt的第%d个字符\n", ftell(fp) + 1);
	fseek(fp, 0, SEEK_END);	//读取文件结尾所在索引 
	last_pos = ftell(fp);
	printf("文件尾位置在%d\n", last_pos);	
	
	//此处开始试图反转文件内的字符 
	for (count = 0; count < last_pos;++count)
	{
		fseek(fp, count, SEEK_SET);
		reverse[last_pos - 1 - count] = getc(fp);
	}
	fseek(fp, 0, SEEK_SET);
	fprintf(fp, "%s", reverse);
	fclose(fp);
	
	return 0;
}

/*
	fseek()函数的原型如下：
	int fseek(FILE *_File,long _Offset,int _Origin); 
	第一个参数是文件指针
	第二个参数是索引偏移量 
	第三个参数是模式，用来标识起始点
	
	函数的返回值是对文件指针_File的操作结果。0是操作成功，
但如果试图移动超出文件的范围以及其余错误，则返回-1 
	
	文件的起始点模式
	SEEK_SET		文件开始的位置
	SEEK_CUR		文件当前的位置
	SEEK_END		文件结尾的位置 
	
	示例 
	"C Primer Plus"
	      ^
	      |文件当前位置
		   
	fseek(fp, 0L, SEEK_SET); 	//找到文件开始的位置	指向'C' 
	fseek(fp, 10L, SEEK_SET);	//找到 从文件开始的位置偏移10个字节所在的位置	指向'l' 
	fseek(fp, -2L, SEEK_CUR);	//找到 从文件当前的位置偏移-2个字节所在的位置	指向'r' 
	fseek(fp, 0L, SEEK_END);	//找到文件结尾的位置							指向's'的后面 
	fseek(fp, -9L, SEEK_END);	//找到 从文件结尾的位置偏移-9个字节所在的位置 	指向'i' 
	
	注意！不能这样使用：
	long p = SEEK_SET;	//p是0	
	p = SEEK_CUR;		//p是1 
	p = SEEK_END; 		//p是2
	
	因为：
	#define SEEK_CUR 1
	#define SEEK_END 2
	#define SEEK_SET 0	 
	 
	
	ftell()函数的原型
	long ftell(FILE *_File);
	函数接受文件指针，返回当前文件指向的索引值i（意指第i + 1个字节) 
	
	
*/
