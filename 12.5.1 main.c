#include <stdio.h>


//为引入常用的随机数函数，我们通过这个项目来了解其大致原理。 
extern int rand();		//extern可以省略 
extern void srand(unsigned); 
int main(int argc, char* argv[]) {
	int i;
	//尝试此行调用srand()函数改变随机数种子的值，比如尝试srand(1); 然后srand(2); ... 
	for (i = 0;i < 5; ++i)
		printf("%hd\n", rand());
	return 0;
}

/*
	当seed的初值固定时，随机数生成器生成的值顺序也是固定的。无论你运行多少次都一样。 
	所以我们需要引入一个srand()函数来改变seed的初值，然而什么使用什么方法可以使得每次运行时seed的初值不一样呢？请看下节 
*/ 
