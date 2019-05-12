#include <stdio.h>
#include <string.h>

int main()
{
	const char * str = "Hello World!";
	printf("%d\n", strlen(str));	//复习一下，它将输出什么？
	printf("%d\n", sizeof str);		//同上，回答这个问题前，先想想str是什么类型？ 
	printf("%d\n", sizeof "Hello World!");	//同上 
	return 0; 
}

/*
	介绍头文件string.h家族的一些函数
	strlen()函数的原型如下： 
	int strlen(const char * _Str);
	提供一个字符串，返回该字符串的字符个数(从_Str指向的字符开始直到遇到'\0'(但不包括'\0')结束) 
	
	
*/
