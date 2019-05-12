#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch;
	
	while ((ch = getchar()) != '\n')
	{
		if (islower(ch))			//islower()函数检测字符是否为小写，是则返回非零值(不一定是1)，否则返回0 
			putchar(toupper(ch));	//toupper()函数负责将小写字符转换成大写字符，如果不是小写字母，则原样输出 
		else
			putchar(ch);
									//不要写成if(islower(ch) == 1) 的形式 
	}
	putchar(ch);	
	return 0;
}
//
/*
		ctype字符处理库函数
	常用函数名		用途
	isalnum()		字符参数是 字母或数字	时返回非零值(不一定是1)
	isalpha()		字符参数是 字母		  	时返回非零值(不一定是1)
	isdigit()		字符参数是 数字			时返回非零值(不一定是1)
	islower() 		字符参数是 小写字母		时返回非零值(不一定是1)
	ispunct()		字符参数是 标点符号		时返回非零值(不一定是1) 
	isspace()		字符参数是 空格、制表符、换行符 时返回非零值(不一定是1)
	isupper()		字符参数是 大写字母		时返回非零值(不一定是1)
	
	tolower()		如果参数是大写字符，返回相应的小写字符；否则，返回原始参数 
	toupper()		如果参数是小写字符，返回相应的大写字符；否则，返回原始参数 
*/ 
