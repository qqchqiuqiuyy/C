#include <stdio.h>
#include <stdlib.h>	//使用rand() 和srand() 函数 
#include <time.h>	//使用time() 函数 

int main()
{
	srand((unsigned) time(NULL));
	int i;
	for (i = 0;i < 5;++i)
		printf("%d\n", rand() % 5);	//取0-4的值
	puts("");
	for (i = 0;i < 5;++i)
		printf("%d\n", 3 + rand() % 4);	//取3-6的值
	puts("");
	for (i = 0;i < 5;++i)
		printf("%d\n", rand() % 50 * 2);	//取0-98内的偶数值 
	return 0; 
}

/*
	 首先由于time()函数返回64位int，而srand()需接受参数unsigned，必须对time()的返回值进行强制转换 
	 time()函数原型：
	 time_t time(time_t * Time);
	 传递的指针可以是NULL(空指针)，若传递的是time_t指针，则它会修改传入参数指向的值为从1970年1月1日到现在经过的秒数
	 它也会返回上述的值
	 
	 所以time()的返回值总是变化的，适用于做seed 
	 
	 srand()函数原型：
	 void srand(unsigned int _Seed);	//传入一个seed值
	 
	 rand()函数原型：
	 int rand();	//返回一个随机值 
	 
	 【注意】srand()函数只应该被调用一次，若尝试在循环内调用，则因为一次循环用时在纳秒级别而导致
	随机数种子值被复位（秒数没变），导致随机数值一样！ 
*/ 
