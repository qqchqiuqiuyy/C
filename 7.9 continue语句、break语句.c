#include <stdio.h>
int main()
{
	double score, max = 0.0, min = 100.0, sum = 0.0;	//����ñ�֤��ʼmaxΪ��С��ֵ����ʼminΪ����ֵ 
	int n = 1;	//���к�
	printf("��λ���и�ѡ�ִ��:\n"); 
	printf("1�Ų��д��(0.0 - 100.0): ");
	while (scanf("%lf",&score) == 1)
	{
		if (score < 0.0 || score > 100.0)
		{
			 printf("������������(0.0 - 100.0)<q����>:");
			 continue;	//continue��佫����������������(��ִ��)���ص�ѭ�����������ʽ���(�˲����ᴥ�����±��ʽ) 
		}
		
		max = score > max ? score : max;
		min = score < min ? score : min;
		sum += score;
		
		if (n >= 5)
			break;	//break��佫ֱ��ǿ�������ò�ѭ�� 
		printf("%d�Ų��д��(0.0 - 100.0): ", ++n); 
	} 
	
	sum -= max + min;	//ȥ��һ����ͷֺ���߷�
	sum /= n - 2;		//����ƽ����
	printf("ȥ��һ����ͷ�: %.1lf\n", max);
	printf("ȥ��һ����߷�: %.1lf\n", min);
	printf("ƽ������: %.1lf\n", sum);
	return 0; 
}
