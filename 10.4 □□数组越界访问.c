#include <stdio.h>

int main()
{
	int arr[4], i;
	for (i = -1; i <= 4; ++i)	//����arr[-1]��arr[4]����Խ����� 
		arr[i] = 2 * i + 1;
	for (i = -1; i < 7; ++i)	//���ﳢ�Դ�ӡarr[-1] ��arr[4] �� arr[5] �� arr[6]��ֵ 
		printf("arr[%d] = %d\n", i, arr[i]);
	return 0;	
} 
