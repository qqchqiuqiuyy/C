#include <stdio.h>
#include <stdlib.h>	//ʹ��C��׼���ڵ�qsort���� 

int up(const void*, const void*);
int down(const void*, const void*);

int main()
{
	int nums[10] = {3,6,2,8,9,10,4,5,1,7}, i;
	
	qsort(nums, 10, sizeof (int), up);
	printf("������������� \n");
	for (i = 0;i < 10;++i)
		printf("%3d", nums[i]);
	putchar('\n');
	
	qsort(nums, 10, sizeof (int), down);
	printf("����������� \n");
	for (i = 0;i < 10;++i)
		printf("%3d", nums[i]);
	
	return 0;
}

int up(const void* left, const void* right)
{
	return *(int *) left - *(int *) right;	//���� 
}	//��void*ǿ��ת����int*��ǵý������Ŷ 

int down(const void* left, const void* right)
{
	return *(int *) right - *(int *) left;	//���� 
}

/*
	ͷ�ļ�stdlib.h����һ������qsort��������������ɱȽϵ��������ͣ�������п�������
	����ԭ�����£�
	qsort(void * _Base, size_t _NumOfElements, size_t _SizeOfElements, int (*FuncCompare)(const void*, const void*));  
	��һ��������Ҫ���������
	�ڶ��������������Ԫ�ظ���
	����������������Ԫ����ռ�ڴ���ֽ���
	���ĸ����������ڱȽϵĺ���ָ�� 

*/ 
