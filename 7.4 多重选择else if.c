#include <stdio.h>

int main()
{
	unsigned score;
	printf("������ĳɼ�(0 - 100��): ");
	scanf("%d",&score);
	if (score < 0)
		printf("������ĳɼ����Ϸ�\n");
	else if (score < 60)
		printf("���������F\n");
	else if (score < 70)		//����������˵��score >= 60 
		printf("���������D\n");
	else if (score < 80)		//����������˵��score >= 70
		printf("���������C\n");
	else if (score < 90)		//����������˵��score >= 80
		printf("���������B\n");
	else if (score <= 100)		//����������˵��score >= 90
		printf("���������A\n");
	else						//����������˵��score > 100
		printf("������ĳɼ����Ϸ�\n");
	return 0;
}
