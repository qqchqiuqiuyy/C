#include <stdio.h>

void count(int [],int, int, int *);
//ͨ��������ʡ�Է���ֵ���ڲ�����ʹ�ò������أ���Ϊ����ʹ����⣬����Щ������ȷʹ��ָ�븨��������Ϣ��
//���ֱ�����ͨ����������������������ֵ�� 
int main()
{
	int nums[10] = {2, 5, 2, 3, 1, 4, 2, 3, 3, 2}, n;
	count(nums, 10, 2, &n);
	printf("Ԫ��2������nums����%d��\n", n);
	return 0;
}




void count(int arr[],int n, int val, int * OUT)	//�ڶ�������n�Ǹ��ߺ��� ָ��arrָ�������Ԫ�ظ��� 
{
	int i;
	*OUT = 0;
	for (i = 0; i < n; ++i)
		if (val == arr[i])
			++(*OUT);
}	

