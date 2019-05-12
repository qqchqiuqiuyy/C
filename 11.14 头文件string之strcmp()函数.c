#include <stdio.h>
#include <string.h>

int main()
{
	const char * str1 = "computer";
	const char * str2 = "compute";
	const char * str3 = "caculate";
	const char * str4 = "critical";
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
	printf("%8s 和 %8s 比较，结果为 %d\n", str1, str2, strcmp(str1, str2));
	printf("%8s 和 %8s 比较，结果为 %d\n", str1, str3, strcmp(str1, str3)); 
	printf("%8s 和 %8s 比较，结果为 %d\n", str2, str1, strcmp(str2, str1));
	printf("%8s 和 %8s 比较，结果为 %d\n", str3, str1, strcmp(str3, str1));
	printf("%8s 和 %8s 比较，结果为 %d\n", str1, str1, strcmp(str1, str1));
	printf("%8s 和 %8s 比较，结果为 %d\n", str2, str4, strcmp(str2, str4));
	return 0;
}

/*
	strcmp()函数的原型如下：
	int strcmp(const char * _Str1, const char * _Str2);
	返回值是返回两个字符串比较的结果
	两个参数是要比较的字符串
	
	当两个字符串相等时，函数返回0
	若_Str1的字典排序比_Str2的大，则返回1，反之返回-1 
	
	说明两个字符串相等的表达式是!strcmp(str1, str2) 或 strcmp(str1, str2) == 0
	比较两个字符串相等万不可比较二者指针，如str1 == str2这种做法是错误的！														 
*/ 
