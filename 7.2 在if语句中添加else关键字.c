#include <stdio.h>


int main()
{
	const int Freezing = 0;
	double temperature;
	int cold_days = 0, total_days = 0;
	printf("������Щ�������������¶ȣ�ֱ��������q�س�����:\n");
	while (scanf("%lf",&temperature))
	{
		++total_days;
		if (temperature < Freezing)
			++cold_days;
	}
	
	if (total_days != 0)
		printf("%d���д����%.1lf%%�������������µ��¶�\n",
				total_days, 100.0 * cold_days / total_days);
		//��������ʱӦ�ں��ʵĵط�����
	else
		printf("û����������!\n");
	
	return 0;
}

/*  else��䲻�ܵ���ʹ�ã�������if���䣬ͬ��else���Խ��������� 

	if (expression)
		statements
	else (expression)
		statements 
		
		
	if (a > 0)
		printf("%d",a);
		++i;			//��仰�Ƕ�����䣬��ʹ��else�Ͽ������������� 
	else
		printf("%d",a);	
*/ 
