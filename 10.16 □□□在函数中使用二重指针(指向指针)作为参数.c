#include <stdio.h>

void swap_ptr(int** a, int** b);

int main()
{
	int a[4] = {1, 2, 3, 4}, b[4] = {4, 3, 2, 1};
	int * p1 = a, * p2 = b;
	int i;
	
	printf("����ǰָ��p1ָ�������Ԫ��Ϊ��");
	for (i = 0;i < 4;++i)
		printf("%d ",p1[i]);
	
	printf("\np2ָ�������Ԫ��Ϊ��");
	for (i = 0;i < 4;++i)
		printf("%d ",p2[i]);
	
	swap_ptr(&p1, &p2);
			 
	printf("\n���ɺ�������ָ���\n");
	printf("p1ָ�������Ԫ��Ϊ��");
	for (i = 0;i < 4;++i)
		printf("%d ",p1[i]);
	
	printf("\np2ָ�������Ԫ��Ϊ��");
	for (i = 0;i < 4;++i)
		printf("%d ",p2[i]);
}

void swap_ptr(int** a, int** b)
{
	int* tmp = *a;	//��������ָ��ָ��ı���(��ָ��) 
	*a = *b;
	*b = tmp; 
}

//��ע�⡿����ָ�벻��ָ���ά���飡 

