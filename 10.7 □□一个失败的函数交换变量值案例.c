#include <stdio.h>

void swap(int a, int b);

int main()
{
	int a = 3, b = 5;
	swap(a, b);		//企图用一个函数来交换变量的值 
	printf("a = %d, b = %d\n", a, b);
	return 0;
}

void swap(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
	//这里加一句printf("a = %d, b = %d\n", a, b);	
	//将发现这里a和b的值的确发生了交换 
}

/*
	运行后会发现，main()函数中a和b的值其实没发生
	根本原因是，当我们调用swap(a, b)的时候，我们将会暂时离开main()函数，
而swap()函数的两个形式参数a, b的值将承接main()函数中a和b的值，在swap()
函数中交换的实际上只是它自己的两个形式参数，对main()函数的a和b是没有丝
毫影响的，而且swap()函数现在也是无法访问main()函数的变量的。所以这种交
换方式行不通。 

	你可以在swap()函数输出参数a、b的地址，并在main()函数输出变量a、b
的地址，可以发现二者地址是不相同的 
	
*/ 
