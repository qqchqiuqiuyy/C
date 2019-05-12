#include <stdio.h>

void to_binary(long long n);	//递归输出n的二进制数 

int main()
{
	long long num;
	printf("输入一个非负数，程序将以二进制形式输出(q结束): ");
	while (scanf("%lld",&num))
	{
		if (num < 0)
			printf("抱歉，仅接受非负数");
		else
			to_binary(num);
		printf("\n输入一个非负数，程序将以二进制形式输出(q结束): ");
	}
	return 0; 
}

void to_binary(long long n)
{
	int rest = n % 2;			//先保存结果 
	if (n >= 2)
		to_binary(n / 2);		//递归 
	putchar('0' + rest);		//最后反向输出余数 
	return;
}

/*	
	分析原理
	使用取余法然后将结果倒着看就是二进制数
	237  %  2  =  1
	118  %  2  =  0
	 59  %  2  =  1
	 29  %  2  =  1
	 14  %  2  =  0
	  7  %  2  =  1
	  3  %  2  =  1
	  1  %  2  =  1 
	那么二进制数就是11101101
	使用递归法的话，就是先将运算结果保存，然后递归，最后算出的余数最先输出。 

*/ 
