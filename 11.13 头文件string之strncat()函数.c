#include <stdio.h>
#include <string.h>

int main()
{
	char str1[20] = "Hello";
	char str2[20] = " World!";
	strncat(str1, str2, 3);		//从str1的第一个'\0'处拼接字符串str2的前三个字符 
	str1[8] = '\0';
	strncat(str1, str2 + 3, 4);		//从str1的第一个'\0'处拼接字符串str2 + 3的前四个字符 
	str1[12] = '\0';
	puts(str1);
	return 0; 	
}

/*
	strncat()函数的原型如下： 
	char * strncat(char * _Dest, const char * _Source, size_t _Count);
	
	返回值是_Dest
	第一个参数是需要被拼接的字符串
	第二个参数是需要拼接的字符串
	第三个参数是要拼接的字符个数 
	
	函数调用如下：
	strcat(str1, str2);
	从str1的第一个'\0'处拼接字符串str2 
	strcat(str1, str2 + 2);
	从str1的第一个'\0'处拼接str2 + 2指向的字符串 
	
*/ 
