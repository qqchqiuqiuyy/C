#include <stdio.h>

int find_max(int arr[], size_t n);			 
int find_min(int * arr, size_t n);		//注意！这两种形式是等价的，说明参数都是指针类型 
//由于指针是形参，所以不能对其用sizeof运算符获取数组大小(只能获得形参指针arr的大小)，所以需要提供另一个
//变量n来说明数组有多少元素 
int main()
{
	int nums[10] = {-3, 5, 7, 2, 0, -4, 6, 8, 2, 1};
	int a = 5;
	printf("数组最大值：%d\n", find_max(nums, 10));	//如果数组大小不定，使用sizeof arrayname / sizeof type 
	printf("数组最小值：%d\n", find_min(nums, 10));
	return 0;
}

int find_max(int arr[], size_t n)
{
	int max = arr[0], pos;
	for (pos = 1; pos < n; ++pos)
		max = max > arr[pos] ? max : arr[pos];
	return max;
}

int find_min(int * arr, size_t n)
{
	int min = arr[0], pos;
	for (pos = 1; pos < n; ++pos)
		min = min < arr[pos] ? min : arr[pos];
	return min;
}
