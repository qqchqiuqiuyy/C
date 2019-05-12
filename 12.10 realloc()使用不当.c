#include <stdio.h>
#include <stdlib.h>

void insert(int arr[], int * size, size_t pos, int val)
{
	*size++;
	arr = realloc(arr, sizeof(int) * *size);
	int i;
	for (i = *size - 1;i > pos;i--)
		arr[i] = arr[i - 1];
	arr[i] = val;
}

int main()
{
	int size = 5;
	int * arr = (int *)malloc(sizeof (int) * size), i;
	for (i = 0;i < 5;++i)
		arr[i] = i + 1;
	printf("arr地址: %p\n", arr);
	for (i = 0;i < 5;++i)
		printf("%d ", arr[i]);
	puts("\n插入元素3在索引3上");
	insert(arr, &size, 3, 3);
	
	printf("arr地址: %p\n", arr);
	for (i = 0;i < 6;++i)
		printf("%d ", arr[i]);
	return 0;
}

/*
	这个程序出现了一个问题：插入元素后输出的内容混乱了
	
	本人经过漫长时间的排查后，终于给我找到原因了，在此之前你可以先尝试寻找问题根源
	
	
	
	
	关键的错误就在于第7行： arr = realloc(arr, sizeof(int) * *size);
	arr是形参，所以改变的实际上是insert()内的arr，而不是main()内的arr。这里发生了新内存地址交接。 
	第七行下面插入一局printf("%p\n", arr); 就可以知道了 
	 
	做法有两种：
	①函数有返回值int *，这样调用语句就变成了arr = insert(arr, &size, 3, 3); 然后insert()内return arr; 
	②函数参数第一个改为二重指针，然后函数内变成*arr = realloc(arr, sizeof(int) * *size); 
*/
