#include <stdio.h>

int * find(int arr[10], int target);	//���ݲ���ʱֻ�ܴ�������Ԫ��Ϊ10��int����	
//ͨ������汾ԭ�ͣ�  int * find(int arr[], int n, int target);		//�ṩ�ڶ���������Ϊָ��arrָ�������Ԫ�ظ���
 
int main()
{
	int nums[10] = {1,3,4,6,8,9,11,13,14,15}, i;
	for (i = 1;i <= 15;++i)
		if (find(nums, i))	//������ص��ǿ�ָ��(NULL)����Ϊ�� 
			printf("����nums�ڴ���Ԫ��%d\n", i);
		else
			printf("Ԫ��%dδ�ҵ�\n", i);
		
	find(nums,6)[2] = 10;	//���ڷ��ص���ָ�룬���Զ�ָ�������鷨������[2]����nums + 3�Ļ�������ƫ��2λ(ָ��nums[5]) 
	*find(nums,13) = 12;	//���ڷ��ص���ָ�룬���Զ�ָ������������������ʵ�����Ƕ�nums[7]��ֵ 
	for (i = 0;i < 10;++i)
		printf("%3d", nums[i]);
			 
}

int * find(int arr[10], int target)		//�����������const�޶������ص�ָ��ҲӦΪconst int *(����ָ��)���������Ļ��Ͳ��ܱ������ú�ֵ 
{
	int i;
	for (i = 0;i < 10;++i)
		if (target == arr[i])
			return arr + i; 
			 
	
	return NULL;	//NULL������ͷ�ļ�stdio.h�У�����NULL��ֵΪ0����ʾ��ָ��, 
}
