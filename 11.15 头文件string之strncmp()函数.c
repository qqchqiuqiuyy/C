#include <stdio.h>
#include <string.h>

int main()
{
	const char * str1 = "computer";
	const char * str2 = "compute";
	const char * str3 = "caculate";
	char str[20];
	printf("请拼写电脑这个英文单词：");
	gets(str);
	while (strcmp(str, str1))
	{
		printf("不是%s，再来一次：", str);
		gets(str);
	}
	puts("对了！");
	
	puts("");
	printf("%8s 和 %8s 比较，结果为 %d\n", str1, str2, strncmp(str1, str2, 5));
	printf("%8s 和 %8s 比较，结果为 %d\n", str1, str3, strncmp(str1, str3, 5)); 
	printf("%8s 和 %8s 比较，结果为 %d\n", str2, str1, strncmp(str2, str1, 5));
	printf("%8s 和 %8s 比较，结果为 %d\n", str3, str1, strncmp(str3, str1, 5));
	return 0;
}

/*
	strncmp()函数的原型如下：
	int strncmp(const char * _Str1, const char * _Str2, size_t _Count);
	返回值是返回两个字符串比较的结果
	两个参数是要比较的字符串
	第三个参数是要比较的前_Count个字符
	
	该函数适用于对比两个字符串之间相对应位置的几个字符，如：
	strncmp("transform","translate",5)	由于两个字符串前五个字符相匹配，返回0
	strncmp("transform","translate",6)	由于transf的字典排序比transl小，所以返回负数(不一定是-1) 
	strncmp("translate","transform",6)	由于transl的字典排序比transf大，所以返回正数(不一定是1) 
	 
	通过改变_Str1和_Str2的初始指向位置，可以决定从第几个字符开始比较，如：
	strncmp(str1 + 3, str2 + 3, 3)	对比两个字符串的第4个到第6个字符是否匹配												 
*/ 
