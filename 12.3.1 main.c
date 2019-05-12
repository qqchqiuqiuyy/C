#include <stdio.h>
#include <stdlib.h>

static int num;		//num的值现在是0 
extern int times;	//times在func.c定义

void func();		//func在func.c定义 
//当函数定义前加了static关键字时，函数作用域为该源文件，即函数定义也必须在此处声明；否则函数定义默认为extern 
 
int main(int argc, char *argv[]) {
	
	printf("num = %d\n", num);
	printf("times = %d\n", times);
	
	for (; num < times; ++num)
		func();
	return 0;
}

/*
	注意！你的函数参数不能包含static关键字！ 
*/
