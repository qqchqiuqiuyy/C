#include <stdio.h>

void swap(int* a, int* b);	//��������Ϊָ�����ͣ���������a��b�ǲ���������Ҳ�����������������ڵĵ�ַ 

int main()
{
	int a = 3, b = 5;
	swap(&a, &b);		//���ݲ�����Ҫ����ַ 
	printf("a = %d, b = %d\n", a, b);
	return 0;
}

void swap(int* a, int* b)
{
	int tmp = *a;	//a��b��ָ��(��main()��a b��һ��)��ע��������������main()������a��b 
	*a = *b;
	*b = tmp;
}
