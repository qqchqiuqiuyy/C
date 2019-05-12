#include <stdio.h>

#define HW "Hello World!" 
 
int main()
{
	const char * str = "Hello World!";
	puts(HW);
	puts(str);
	puts(str + 6);	//与下句等价 
	puts(&str[6]);
	return 0;
	//由于字符串输出比较特殊，它是以指针指向的字符为起点，一直输出其后的字符直到遇到'\0'。所以你可以用指针算术/索引决定起始输出 
}
