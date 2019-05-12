#include <stdio.h>

int add(int a, int b); 
int minus(int a, int b);

int main()
{
	//这些函数指针指向的是什么类型的函数？ 
	void (*p1)();		
	void (*p2)(int); 	
	int (*p3)(int []);	
	int* (*p4)(int [4], int *);	
	const int* (*p5)(const int *(*p)(int, int), const int []);
	 
	//函数指针的数组声明
	int (*p[2])(int, int) = {add, minus};
	printf("add(3, 5) = %d\n", p[0](3, 5));		//使用数组中的函数 
	printf("minus(3, 5) = %d\n", p[1](3, 5));
		
		
	//使用typedef简化声明	
	typedef int(*p_fun)(int, int);
	p_fun func = add;
	printf("func(3, 5) = %d\n", func(3,5));
	
	return 0;
}

int add(int a, int b)
{
	return a + b;
}

int minus(int a, int b)
{
	return a - b;
}

//函数指针p1指向函数(无参数，无返回值) 
//函数指针p2指向函数(参数为int，无返回值)
//函数指针p3指向函数(参数为int数组(指针)，返回值int)
//函数指针p4指向函数(参数为int数组(4个元素)、int指针，返回值int指针)
//函数指针p5指向函数(参数为函数指针(参数为int、int，返回值为const int *)、常量int数组,返回值const int *) 


/*
	函数指针的数组可以保存同一类型的函数地址，声明方式示例如下： 
	void (*p1[4])();	//声明了一个指针数组(都是指向void func();类型的函数)，容纳4种同种类型的函数指针) 

*/
