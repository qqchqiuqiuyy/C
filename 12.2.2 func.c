#include <stdio.h>	//这里需要预编译指令以使用scanf()和size_t 

//该源文件专门用于存放函数定义 
double range(double nums[], size_t n)
{
	if (n == 0)
		return 0;
	int i;
	double max = nums[0], min = nums[0];
	for (i = 0;i < n;++i)
	{
		max = max > nums[i] ? max : nums[i];
		min = min < nums[i] ? min : nums[i];
	}
	return max - min;
}

void input(double nums[], size_t n)
{
	int i;
	for (i = 0; i < n;++i)
		scanf("%lf", nums + i);
}
