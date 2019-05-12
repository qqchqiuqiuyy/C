#include <stdio.h>
#include <stdbool.h>

/* 在C语言中，其实还有这样一种变量类型： _Bool         //布尔值 
   它的变量的值是1则表达true，0则表达false
   这种变量类型多用于表达式中，用法为：
   	    _Bool isPrime = 1;
		if (isPrime)	//表示如果是质数 
			...			//做某些事 
			
   但是为了能兼容C++(因为C++使用bool、true和false，而C没有)，建议使用头文件stdbool.h
   这里面有三句重要的#define语句：
	#define bool	_Bool
	#define true	1
	#define false	0
   这样，我们就可以直接使用bool来代替_Bool，true代替1，false代替0了
   比如：
   		bool isPrime = true;	
		if (isPrime)
			... 
			
	当然我们也可以直接在你的C语言代码中加入上述三行代码：
	#define bool	_Bool
	#define true	1
	#define false	0 
	
	当然还是不如一句  #include <stdbool.h>  来得快
*/ 

int main()
{
	unsigned num;
	unsigned div;	//可能的约数
	bool isPrime;	//是否为素数(是则值为true) 
	
	printf("输入一个数，显示它的约数<输入q结束>: ");
	
	/*使用scanf()函数和while循环连续读取整数，在for循环中先初始化除数2，并假定它是素数，
	  直到除数的平方要比输入的整数大就结束检测。内部的if检测它是能不能被除数整除，如果能，
	  则isPrime为false，然后输出它的除数。循环结束后，如果isPrime为true，则它是素数 
	*/
	while (scanf("%u",&num)) 
	{
		for (div = 2, isPrime = true; (div * div) <= num; ++div)	 
		{
			if (num % div == 0)
			{
				if ((div * div != num))
					printf("%u可以被 %u 和 %u 整除\n", num, div, num / div);
				else
					printf("%u 可以被 %u 整除\n", num, div);
				isPrime = false;
			}
		}
		if (isPrime)
			printf("%u 是一个素数\n", num);
		printf("\n请输入另一个整数，显示它的约数<输入q结束>: ");
	}
	return 0;
}
