#include <stdio.h>

int main()
{
	const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	//����������ݸ���ֵ��Ԫ�ظ�����ȷ�������С������days[12]����Խ����Ϊ 
	int i;
	for (i = 0; i < sizeof days / sizeof (int); ++i)	//ʹ�� sizeof ������ / sizeof �����һ��Ԫ�� or (��������) ȷ�������С 
		printf("%d����%d��\n", i + 1, days[i]);
	return 0;
} 
