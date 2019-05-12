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
	���ǲ����ö���ָ��ָ��һ����ά���飬��Ϊ���ǲ�֪���ڶ�ά�ȴ�С
�Ƕ��٣��������ǲ��ܶ�����*(a+1)�Ĳ�����������������ڵ�Ԫ��������
����һ���ԣ����ǿ���ʹ��ָ��͸���ά�ȵĴ�С��Ϊ����������Nά����
��N-1�ν�����ô��ݸ��������ں�������һά�������ʽ������Nά���顣

    ����3ά���飬����
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
