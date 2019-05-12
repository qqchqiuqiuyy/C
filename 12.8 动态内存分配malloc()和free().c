#include <stdio.h>
#include <stdlib.h>		//使用exit()、malloc()、free() 

int main()
{
	size_t max;	//确定数组元素个数
	int i, sum = 0;
	int * dyn_arr;
	
	printf("输入元素个数：");
	scanf("%u", &max);
	
	dyn_arr = (int *)malloc(sizeof (int) * max);
	if (dyn_arr == NULL)
	{
		puts("内存分配申请失败！程序强制结束。");	//这里尝试创建含1000000000个(可能更少)元素的数组将由于没有足够空间分配而导致申请失败 
		exit(EXIT_FAILURE);			//exit()函数用于程序强制结束，EXIT_FAILURE表示程序应异常退出；EXIT_SUCCESS则表示程序成功结束。 
	}
	
	printf("连续输入%d个数：", max);
	for (i = 0;i < max;++i)
	{
		scanf("%d", dyn_arr + i);
		sum += dyn_arr[i];
	}
	
	puts("数组元素如下: ");
	for (i = 0;i < max;++i)
		printf("%d ", dyn_arr[i]);
	printf("\n总和为: %d\n", sum);	
	
	free(dyn_arr);	//在程序即将结束的时候，一定要注意释放你曾经申请过的内存，否则会导致内存泄漏。 
	
	return 0; 
}

/*
	由于一般数组声明时元素个数就已经是固定的了，然而有时候我们希望能根据客户意愿来决定数组的大小。
	这里就有了动态数组。动态数组是由程序员/用户申请的，不管你是在main()函数创建还是别的函数创建的，
只要它不被释放内存，该动态数组将会一直存在。 
	首先我们需要声明一个指针：
	int * arr;		//此时arr是野指针
	
	malloc()函数(memory allocate)原型如下：
	void * malloc(size_t _Size);
	函数的参数是要分配的字节数
	返回值是返回一个管辖已经分配好内存区域的void指针（申请空间过大或其余错误时则返回NULL）
	
	然而我们还需要进行强制类型转换，将其返回的void指针转换成所要使用的指针类型以适配
	
	如： arr = (int *) malloc(4 * sizeof(int));		//分配4个int大小的内存给arr，这样arr可存放4个int 
	注意： 空调用malloc()函数而不赋值给变量也是一种内存泄漏！
	
	
	程序即将结束或者不需要再使用这片内存时，可使用free()函数。
	free()函数原型如下： 
	void free(void * _Memory);
	你可以放入任何类型的动态指针用以释放内存 
	注意：①不要对一片内存释放两次！
		  ②不要将自动类型、静态类型放入此处释放！这里只能释放动态类型
		  ③一定要记得在程序结束或不需要用到动态数组的时候将其释放掉，因为程序并不会手工释放这些内存，这会导致内存泄漏。 
		  
	当你的程序没有free()函数时，随着各种内存的申请占用，你的内存占用率会越来越高，导致卡顿，甚至内存爆满被迫结束程序。
	
	【注意】调用free()函数后，指针依然指向原来的地址，而不是NULL！ 
*/
