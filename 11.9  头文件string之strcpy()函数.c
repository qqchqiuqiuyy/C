#include <stdio.h>
#include <string.h>

int main()
{
	char str1[30];
	const char * str2 = "Hello World!";
	char * str3 = strcpy(str1, str2);
	//常用的方法应该是strcpy(str1, str2);	//直接无视返回值 
	puts(str1);
	printf("str1 = %p\n", str1);
	printf("str2 = %p\n", str2);
	printf("str3 = %p\n", str3);
	
	strcpy(str1, str2 + 6);		//从str2第7个字符开始复制给str1 
	puts(str1);
	
	strcpy(str1 + 6, str2);		//从str1的第7个字符位置起将字符串str2复制过去
								//不能从str1 + 7以后的位置赋值是因为str1[6]是'\0'，输出字符串无法读到str1[6]后面的字符 
	puts(str1); 
	
	return 0;
}

/*
	strcpy()函数的原型如下：
	char * strcpy(char * _Dest, const char * _Source);
	
	返回值是_Dest保存的地址值
	第一个参数是接受复制的字符数组
	第二个参数是要复制的字符串
	
	函数调用方法如下：
	strcpy(str1, str2); 

*/
