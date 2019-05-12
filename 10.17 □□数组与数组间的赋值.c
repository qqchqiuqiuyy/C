#include <stdio.h>

int main()
{
	int a[4] = {1, 2, 3, 4};
	int b[4], i;
	//b = a; 	//错误！a和b都是指针常量，不能相互赋值
	for (i = 0; i < 4; ++i) 
		b[i] = a[i];	//这才是正确的赋值方式，在此我们叫深度复制(deep copy) 
	int * c = b;		//只是将b所在的地址赋给c，这叫作浅复制(shallow copy) 
	return 0;
	//以后将讲到如何对指针分配内存、以及进行深度复制 
}
