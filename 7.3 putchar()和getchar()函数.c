#include <stdio.h>
#define ENDLINE '\n'
#define SPACE   ' '

int main()
{
	char ch;
	int spaces = 0;	//统计空格数 
	ch = getchar();	//读入一个字符(需要键入)，可连续键入后回车让循环处理其余字符 
	while (ch != ENDLINE)
	{
		if (ch == SPACE)
		{
			++spaces;
			putchar(ch);	//输出一个字符 
		}
		else
			putchar(ch + 1);	
		ch = getchar();
	}
	putchar(ch);
	printf("\n一共有%d个空格",spaces);
	return 0;
}

/*
	getchar()函数通过键盘输入或缓冲流(键入的残留字符)读取一个字符，返回其ASCII码
		(可直接赋给char变量不用担心隐式转换) 
	putchar()函数需要提供一个参数(可以是ASCII码也可以是一个字符)，然后输出这个
	    字符到屏幕上。
*/ 
