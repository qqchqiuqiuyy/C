#include <stdio.h>

int main()
{
	printf("����һ������n���1�ӵ�n�ĺ�: ");
	int n, i = 0, sum = 0;	//�ܶ��˶�û�а�sum����ֵ0�������ȥ���������㣬���ǲ��Եģ��� 
	scanf("%d",&n);
	while (++i <= n)	//����whileѭ��Ҫ�����ʽ����٣�i�ͻ�������1��������n���Ƚ� 
		sum += i;
	printf("1+2+...+%d = %d\n",n,sum);
	return 0;
}
