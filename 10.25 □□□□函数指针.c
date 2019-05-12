#include <stdio.h>

int add(int a, int b); 
int minus(int a, int b);

int main()
{
	printf("函数add所在地址：%p\n", add);	//函数名是函数指针 
	printf("函数minus所在地址：%p\n", minus);
	
	int (*p)(int, int) = add;		
	printf("函数指针p调用add：p(3, 5) = %d\n", p(3, 5));
	
	p = minus;
	printf("函数指针p调用minus：p(3, 5) = %d\n", p(3, 5));
		
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
/*	
	函数指针
	
	当我们运行程序的时候，函数也被当做一种数据(二进制形式)保存在内存中。调用一个函数，我们也需要知道
函数所在的内存地址。因此我们调用函数实际上就是使用了函数指针去访问函数所在的内存，然后使用里面的指令
	若func1函数内的语句越多，func2函数的地址将被推的越后。
	系统调用main()函数也是以指针形式调用的		 
	
	函数指针也是一种变量类型，它可以指向任意同类型函数 
	
	函数指针的声明与函数定义类似，对比一下：
	int func1(int a, int b);	//func1函数，参数为两个int，返回值类型为int 
	int (*p)(int a, int b);		//p是函数指针，指向一个函数(参数为两个int，返回值类型为int) 
	
	区别在于函数名有前缀*，并用括号括住，没有括号的话就是
	int * p(int a, int b); 		//p函数，参数为两个int，返回值类型为int指针 
*/
