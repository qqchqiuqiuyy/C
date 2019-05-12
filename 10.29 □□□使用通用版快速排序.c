#include <stdio.h>
#include <stdlib.h>	//使用C标准库内的qsort函数 

int up(const void*, const void*);
int down(const void*, const void*);

int main()
{
	int nums[10] = {3,6,2,8,9,10,4,5,1,7}, i;
	
	qsort(nums, 10, sizeof (int), up);
	printf("快速排序升序后： \n");
	for (i = 0;i < 10;++i)
		printf("%3d", nums[i]);
	putchar('\n');
	
	qsort(nums, 10, sizeof (int), down);
	printf("快速排序降序后： \n");
	for (i = 0;i < 10;++i)
		printf("%3d", nums[i]);
	
	return 0;
}

int up(const void* left, const void* right)
{
	return *(int *) left - *(int *) right;	//升序 
}	//将void*强制转换成int*后记得解除引用哦 

int down(const void* left, const void* right)
{
	return *(int *) right - *(int *) left;	//降序 
}

/*
	头文件stdlib.h中有一个函数qsort，可以用于任意可比较的数据类型，对其进行快速排序
	函数原型如下：
	qsort(void * _Base, size_t _NumOfElements, size_t _SizeOfElements, int (*FuncCompare)(const void*, const void*));  
	第一个参数是要排序的数组
	第二个参数是数组的元素个数
	第三个参数是数组元素所占内存的字节数
	第四个参数是用于比较的函数指针 

*/ 
