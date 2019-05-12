#include <stdio.h>

long long fact_loop(int n);		//ѭ������׳� 
long long fact_recurse(int n);	//�ݹ����׳� 

int main()
{
	int num;
	printf("����һ����(0-20)�����Ľ׳�(q����): ");	//����long long�����ƣ�����ܱ�֤20!�������� 
	while (scanf("%d",&num))
	{
		if (num > 20)
			printf("��Ǹ����Ҫ����20\n");
		else if (num < 0)
			printf("��Ǹ�������ܸ���\n");
		else
		{
			printf("ʹ��ѭ���� %d! = %lld\n", num, fact_loop(num));
			printf("ʹ�õݹ鷨 %d! = %lld\n", num, fact_recurse(num));
		}
		printf("����һ����(0-20)�����Ľ׳�(q����): ");
	}
	return 0; 
	
}

long long fact_recurse(int n)
{
	if (n > 0)
		return fact_loop(n - 1) * n;	//ȷ��ÿһ����֧��Ҫ�з���ֵ�� 
	else
		return 1;
}

long long fact_loop(int n)
{
	long long ans = 1;
	int i;
	for (i = 1;i <= n;++i)
		ans *= i;
	return ans;		
}
