#include <stdio.h>

int sum(const int arr[],int begin, int end); //在形式参量中使用const限定符，使得你不能在函数中修改数组的值 

int main()
{
	int nums[8] = {3, 5, 7, 12, 5, 8, 11, 9};
	int tot = sum(nums, 3, 6);	//求nums[3]+nums[4]+nums[5]
	printf("total = %d", tot);
	return 0; 
}

int sum(const int arr[],int begin, int end)		//对索引区间[begin,end)内的数组求和 
{
	int  total = 0;
	for (;begin < end;++begin)
		total += arr[begin];
	//arr[2] = 3;	//这是错误的！ 
	return total;	
}
