#include <stdio.h>

int main()
{
	int arr[4], i;
	for (i = -1; i <= 4; ++i)	//这里arr[-1]和arr[4]都是越界访问 
		arr[i] = 2 * i + 1;
	for (i = -1; i < 7; ++i)	//这里尝试打印arr[-1] 、arr[4] 、 arr[5] 、 arr[6]的值 
		printf("arr[%d] = %d\n", i, arr[i]);
	return 0;	
} 
