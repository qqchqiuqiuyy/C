#include <stdio.h>
#include <string.h>

int main()
{
	const char * str = "abstract";
	//自己试着用吧，懒得写示范了= =反正几乎很少用 
	return 0; 
}

/* 
	strchr()函数的原型如下：
	char * strchr(const char * _Str, int _Val); 
	该函数返回一个指向字符串s中存放字符_Val的第一个位置的指针(标志结束的空字符也是字符串的一部分，因此也可以搜索到它)。
如果没找到该字符，函数就返回空指针。
	
	strpbrk()函数的原型如下：
	char * strpbrk(const char * _Str, const char * _Control);
	该函数返回一个指针，指向字符串s1中存放s2字符串中的任何字符的第一个位置。如果没找到任何字符，函数就返回空指针。
	
	strrchr()函数的原型如下：
	char * strrchr(const char * _Str, int _Val);
	该函数返回一个指针，指向字符串s中字符c最后一次出现的地方(标志结束的空字符也是字符串的一部分，因此也可以搜索到它)。
如果没找到该字符，函数就返回空指针。

	strstr()函数的原型如下：
	char * strstr(const char * _Str, const char * _SubStr);
	该函数返回一个指针，指向_Str字符串中第一次出现_SubStr字符串的地方。如果在_Str中没找到_SubStr，函数就返回空指针。 
*/
