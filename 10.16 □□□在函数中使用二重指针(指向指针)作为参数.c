#include <stdio.h>

void swap_ptr(int** a, int** b);

int main()
{
	int a[4] = {1, 2, 3, 4}, b[4] = {4, 3, 2, 1};
	int * p1 = a, * p2 = b;
	int i;
	
	printf("交换前指针p1指向的数组元素为：");
	for (i = 0;i < 4;++i)
		printf("%d ",p1[i]);
	
	printf("\np2指向的数组元素为：");
	for (i = 0;i < 4;++i)
		printf("%d ",p2[i]);
	
	swap_ptr(&p1, &p2);
			 
	printf("\n经由函数交换指针后\n");
	printf("p1指向的数组元素为：");
	for (i = 0;i < 4;++i)
		printf("%d ",p1[i]);
	
	printf("\np2指向的数组元素为：");
	for (i = 0;i < 4;++i)
		printf("%d ",p2[i]);
}

void swap_ptr(int** a, int** b)
{
	int* tmp = *a;	//交换两个指针指向的变量(或指针) 
	*a = *b;
	*b = tmp; 
}

//【注意】二重指针不能指向二维数组！ 

