#include <stdio.h>

void transport_4x4(int (*)[4]); //����ԭ�͵ı���������ʡ��
//������봫��һ����ά���飬��ô����Ҫ�õ� ָ�������ָ��
//��ָ�������ָ��Ҫ��ڶ�ά�����ǹ̶�ֵ
//����int (*)[4] �� int [4][4]���ǿ��Եģ�������Ϊ����ʱ����ָ�룬���������飡
//�ڵ��ú�����ʱ�򴫵ݵ���ȻҲ�Ƕ�ά������������� 
 
int main()
{
	int matrix[4][4], i, j;
	printf("����һ��4*4����\n");
	for (i = 0; i < 4; ++i)
		for (j = 0; j < 4; ++j)
			scanf("%d", &matrix[i][j]);
	transport_4x4(matrix);
	printf("ת�ú�\n");
	for (i = 0; i < 4; ++i)
	{
		for (j = 0;j < 4; ++j)
			printf("%3d", matrix[i][j]);
		putchar('\n');
	}
	return 0; 
} 

void transport_4x4(int (*matrix)[4])
{
	int i, j, tmp;
	for (i = 0; i < 4; ++i)
		for (j = i + 1; j < 4;++j)
		{
			tmp = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = tmp;
		}
}
