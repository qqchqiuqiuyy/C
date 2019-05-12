#include <stdio.h>
#include <string.h>

int main()
{
	char str1[30];
	const char * str2 = "  Hello World!";
	
	strncpy(str1, str2, 7);
	str1[7] = '\0';		//记得添上'\0' 
	
	puts(str1);

	
	strncpy(str1, str2 + 2, 6);		//将str2第3个到第8个字符复制给str1
	str1[6] = '\0';
	
	puts(str1);
	
	
	strncpy(str1 + 6, str2 + 2, 4);		//从str[5]起将str2第3到第6个字符复制给str1 
	str1[10] = '\0';		//数清楚在正确的位置添上'\0' 
	
	puts(str1);
	return 0;
}

/*
	strcpy()函数的原型如下：
	char * strncpy(char * _Dest, const char * _Source, size_t _Count);
	
	返回值是_Dest保存的地址值
	第一个参数是接受复制的字符数组
	第二个参数是要复制的字符串
	第三个参数是要复制源字符串的前_Count个字符 
	
	【注意】读完限定字符串后，还需要人工在字符串末尾位置添上'\0' 
	一般可无视返回值使用。该函数限定了输入的字符个数，相对安全，并且可以指定要复制的字符串区间
	 
	函数调用方法如下：
	strncpy(str1, str2, 5);	//复制str2的前5个字符 

 
*/
