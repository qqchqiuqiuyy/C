#include <stdio.h>

int main()
{
	int sum = 0, num, success_input;
	printf("����һ�������������<q����>��");
	success_input = scanf("%d",&num);
	while (success_input = 1)	//ע��!����Ӧ����success_input == 1 
	{
		sum += num;
		printf("����һ�������������<q����>��");
		success_input = scanf("%d",&num);
	}
	printf("�ܺ���%d\n",sum);
	return 0;
	
}
