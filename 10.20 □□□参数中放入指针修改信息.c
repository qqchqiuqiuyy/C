#include <stdio.h>

void count(int [],int, int, int *);
//通常不建议省略返回值而在参数中使用参数返回，因为容易使人误解，但有些函数的确使用指针辅助传回信息，
//这种变量名通常都会提醒是用于输出结果值的 
int main()
{
	int nums[10] = {2, 5, 2, 3, 1, 4, 2, 3, 3, 2}, n;
	count(nums, 10, 2, &n);
	printf("元素2在数组nums出现%d次\n", n);
	return 0;
}




void count(int arr[],int n, int val, int * OUT)	//第二个参数n是告诉函数 指针arr指向的数组元素个数 
{
	int i;
	*OUT = 0;
	for (i = 0; i < n; ++i)
		if (val == arr[i])
			++(*OUT);
}	

