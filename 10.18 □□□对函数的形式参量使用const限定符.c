#include <stdio.h>

int sum(const int arr[],int begin, int end); //����ʽ������ʹ��const�޶�����ʹ���㲻���ں������޸������ֵ 

int main()
{
	int nums[8] = {3, 5, 7, 12, 5, 8, 11, 9};
	int tot = sum(nums, 3, 6);	//��nums[3]+nums[4]+nums[5]
	printf("total = %d", tot);
	return 0; 
}

int sum(const int arr[],int begin, int end)		//����������[begin,end)�ڵ�������� 
{
	int  total = 0;
	for (;begin < end;++begin)
		total += arr[begin];
	//arr[2] = 3;	//���Ǵ���ģ� 
	return total;	
}
