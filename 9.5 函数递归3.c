#include <stdio.h>

void to_binary(long long n);	//�ݹ����n�Ķ������� 

int main()
{
	long long num;
	printf("����һ���Ǹ����������Զ�������ʽ���(q����): ");
	while (scanf("%lld",&num))
	{
		if (num < 0)
			printf("��Ǹ�������ܷǸ���");
		else
			to_binary(num);
		printf("\n����һ���Ǹ����������Զ�������ʽ���(q����): ");
	}
	return 0; 
}

void to_binary(long long n)
{
	int rest = n % 2;			//�ȱ����� 
	if (n >= 2)
		to_binary(n / 2);		//�ݹ� 
	putchar('0' + rest);		//������������ 
	return;
}

/*	
	����ԭ��
	ʹ��ȡ�෨Ȼ�󽫽�����ſ����Ƕ�������
	237  %  2  =  1
	118  %  2  =  0
	 59  %  2  =  1
	 29  %  2  =  1
	 14  %  2  =  0
	  7  %  2  =  1
	  3  %  2  =  1
	  1  %  2  =  1 
	��ô������������11101101
	ʹ�õݹ鷨�Ļ��������Ƚ����������棬Ȼ��ݹ飬��������������������� 

*/ 
