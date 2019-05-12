#include <stdio.h>

void bubble_sort_up(int arr[], size_t n);
//先尝试自己写一个冒泡排序的函数(升序版)
void bubble_sort_down(int arr[], size_t n); 
//然后是降序的 
int main()
{
	int nums[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}, i;
	
	bubble_sort_up(nums, 10);
	printf("冒泡排序(升序)后：");
	for (i = 0; i < 10; ++i)
		printf("%3d", nums[i]);
	
	putchar('\n');
	bubble_sort_down(nums, 10);
	printf("冒泡排序(降序)后：");
	for (i = 0; i < 10; ++i)
		printf("%3d", nums[i]);
	
	return 0;
}

//写好后往下翻到底对比 



























































void bubble_sort_up(int arr[], size_t n)
{
	int i, j, tmp;
	for (i = 0; i < n - 1; ++i)
	{
		for (j = 0; j < n - 1; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

void bubble_sort_down(int arr[], size_t n)
{
	int i, j, tmp;
	for (i = 0; i < n - 1; ++i)
	{
		for (j = 0; j < n - 1; ++j)
		{
			if (arr[j] < arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
