#include <stdio.h>	//������ҪԤ����ָ����ʹ��scanf()��size_t 

//��Դ�ļ�ר�����ڴ�ź������� 
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
