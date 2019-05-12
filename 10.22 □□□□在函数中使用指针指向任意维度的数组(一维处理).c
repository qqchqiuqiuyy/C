#include <stdio.h>

int sum(int * arr2D, size_t m, size_t n)
{
	int i, j, res = 0;
	for (i = 0;i < m;i++)
		for (j = 0;j < n;j++)
			res += arr2D[i * n + j];
	return res;
}

int main()
{
	int nums[3][3] = {
	{ 2, 5, 7}, { 3, 5, 8}, { 1, 4, 6}
	};
	printf("sum is = %d", sum(*nums, 3, 3));
	return 0;
}

/*
	我们不能用二重指针指向一个二维数组，因为我们不知道第二维度大小
是多少，导致我们不能对其做*(a+1)的操作。但是针对数组内的元素是连续
的这一特性，我们可以使用指针和各个维度的大小作为参数，并将N维数组
做N-1次解除引用传递给函数，在函数内以一维数组的形式来处理N维数组。

    对于3维数组，可以
	int sum(int * arr3D, size_t l, size_t m, size_t n)
	{
		int i, j, k, res = 0;
		for (i = 0;i < l;i++)
			for (j = 0;j < m;j++)
				for (k = 0;k < n;k++)
					res += arr3D[i*m*n + j*n + k];
		return res;
	}
	 

*/
