#include <stdio.h>
int times = 8;

//此处不可以 extern int num; 

extern void func()
{
	static int num3;	//num3是局部静态变量。一旦被声明，将会永久被创建，但是只能在func()内使用。直到程序结束，num3才会消亡 
	printf("函数func()被调用了%d次\n", ++num3);
}
