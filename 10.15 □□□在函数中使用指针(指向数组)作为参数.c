#include <stdio.h>

int find_max(int arr[], size_t n);			 
int find_min(int * arr, size_t n);		//ע�⣡��������ʽ�ǵȼ۵ģ�˵����������ָ������ 
//����ָ�����βΣ����Բ��ܶ�����sizeof�������ȡ�����С(ֻ�ܻ���β�ָ��arr�Ĵ�С)��������Ҫ�ṩ��һ��
//����n��˵�������ж���Ԫ�� 
int main()
{
	int nums[10] = {-3, 5, 7, 2, 0, -4, 6, 8, 2, 1};
	int a = 5;
	printf("�������ֵ��%d\n", find_max(nums, 10));	//��������С������ʹ��sizeof arrayname / sizeof type 
	printf("������Сֵ��%d\n", find_min(nums, 10));
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
