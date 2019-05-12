#include <stdio.h>

void swap(int* a, int* b);	//参数将改为指针类型，这样即便a和b是参数，它们也保存了两个变量所在的地址 

int main()
{
	int a = 3, b = 5;
	swap(&a, &b);		//传递参数需要传地址 
	printf("a = %d, b = %d\n", a, b);
	return 0;
}

void swap(int* a, int* b)
{
	int tmp = *a;	//a和b是指针(和main()的a b不一样)，注意解除引用来访问main()函数的a和b 
	*a = *b;
	*b = tmp;
}
