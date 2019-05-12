 #include <stdio.h>
#include <stdlib.h>	//使用calloc()、free()、

int main()
{
	int * arr = (int *)calloc(5, sizeof(int));
	int i;
	for (i = 0;i < 5;++i)
		arr[i] = i * 2 + 1;
	
	printf("数组arr的地址为: %p\n元素:", arr);
	for (i = 0;i < 5;++i)
		printf("%3d", arr[i]);
	puts("");
	
	puts("尝试将arr扩容一个元素");
	
	//realloc()使用的正确方法----------------------------------------------------------------------------- 
	int * temp = (int *)realloc(arr, 6 * sizeof(int));	//这里应使用一个副本保存重分配结果防止内存泄漏 
	if (temp)	//分配成功，有可能在旧地址重分配，也有可能分配了新的地址					
	{
		arr = temp;		//将临时保存的地址赋给arr，以防arr指向被遗弃了的地址 
		arr[5] = 11;
		printf("数组arr的地址为: %p\n元素:", arr);
		for (i = 0;i < 6;++i)
			printf("%3d", arr[i]);
		puts("");
	}
	else	//申请分配空间过大等导致的分配失败，此时temp为NULL，但arr的旧地址依然有效 
	{
		puts("扩容失败!");
		printf("数组arr的地址为: %p\n元素:", arr);
		for (i = 0;i < 5;++i)
			printf("%3d", arr[i]);
		puts("");
	}
	//---------------------------------------------------------------------------------------------------- 
	free(arr);
	return 0;
}

/*
	calloc()函数的原型如下：
	void * calloc(size_t _NumOfElements, size_t _SizeOfElements);
	第一个参数是要创建的数组元素个数
	第二个参数是数组元素的大小(sizeof) 
	返回值是已经分配好内存空间的地址，但如果出现申请内存过大等原因导致的分配内存失败，则返回NULL
	
	int * nums = (int *)malloc(5 * sizeof (int));	//等价于
	int * nums = (int *)calloc(5, sizeof(int));
	
	realloc()函数的原型如下：
	void * realloc(void * _Memory, size_t _NewSize);
	第一个参数是要重新分配内存的指针
	第二个参数是需要重新分配内存的大小
	返回值是已经重新分配好的内存空间的地址
	关于重新内存分配，有如下注意点：
	①如果重新分配的内存比原有内存小，会导致末尾数据的丢失
	②如果原地址不能申请到足够空间来储存，它将会把数据挪到新地址（该地址有足够空间用以扩容），原地址内存被释放，然后返回新地址
	③如果出现申请内存过大等原因导致的分配内存失败，则返回NULL
	④对于realloc(arr, 6 * sizeof(int));  如果出现情况②，函数返回的是新地址，但是arr依然指向原地址内存，没指针管辖新地址，
这会无形导致内存泄漏！ 
*/
