#include <stdio.h>

int main()
{
	int a;
	printf("How many carrots");		//&Ϊȡַ�������ȡ���������ڵ��ڴ��ַ��ֵ 
	printf(" do you have?\n");		//�����������s���� 
	scanf("%d",&a);					/*�����������ֵ(Ҫ�����ַ����ڸ�ʽ������ŵ���ʽ�ṩ)
									  ���ݸ�����a(д��a���ڵ��ڴ��ַ) */ 
	a = a - 1;                    	//�����a��ֵ��1 
	printf("Now you have %d carrots.\n",a);	
	//scanf��printf���÷����񣬵�������scanfҪ�ṩ������ַ��printfֻ�ṩ������ֵ 
	return 0;
}
