#include <stdio.h>

int main()
{
	printf("%s\n","apple");	//"apple"是一个const char [6](或const char *) 
	printf("%c\n",*"apple");	//对指针解除引用 
	printf("%c\n","apple"[3]);	//对指针使用索引法(下标法) 
	printf("%p\n","apple");
	//printf("%p\n", 4);	//不行！ 
	
	return 0;
} 
