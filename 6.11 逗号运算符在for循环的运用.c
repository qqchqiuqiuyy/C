#include <stdio.h>

int main()
{
	const int start_cost = 7;
	const double cost_per_km = 1.5;
	int km;
	double cost;
	printf("  km  cost\n");
	for (km = 0, cost = start_cost; km <= 15; km++, cost += cost_per_km)
		printf("%4d%6.1lf\n", km, cost);
	//ʹ�ö������������ʹ��ѭ������Դ�Ŷ����ʼ��ֵ����±��ʽ
	//ע�⣡  int a = 1, b = 2, c;   
	//		  printf("%d%d",a,b);
	//����Ķ��Ŷ�ֻ�Ƿָ���������������� 
	
	return 0;
	
}
