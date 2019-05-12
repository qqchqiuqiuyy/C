#include <stdio.h>
#define MONTHS 12
#define YEARS 5

int main()
{
	const float rain[YEARS][MONTHS] = {
		{4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
		{8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
		{9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
		{7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
		{7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
	};	//5����12���µĽ�ˮ������ 
	int year, month;
	float subtot, total;	//�꽵ˮ�� �ܽ�ˮ�� 
	
	printf(" ���      ��ˮ��(Ӣ��)\n");
	for (year = 0, total = 0; year < YEARS; ++year)
	{
		for (month = 0, subtot = 0; month < MONTHS; ++month)
			subtot += rain[year][month];
		printf("%5d %15.1f\n", 2011 + year, subtot);
		total += subtot;
	}
	
	printf("2011-2015���ƽ���꽵ˮ���� %.1f Ӣ��\n\n", total / YEARS);
	printf("������ÿ���µĽ�ˮ��:\n");
	printf(" ��\\��  Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
	for (year = 0; year < YEARS; ++year)
	{
		printf("%5d ", 2011 + year);
		for (month = 0; month < MONTHS; ++month)
			printf("%5.1f",rain[year][month]);
		printf("\n");
	}
	return 0;
}

/*
	��ά����ʹ�����ݿ��Դ�һά��չ����ά������Ҫ�����־��󣬾Ϳ���ʹ��
��ά���飻Ҫ�������ɶ�������������ڷ���һ���γɵĴ��ͳ����壬����ʹ��
��ά���顣��Ȼ����õĻ��Ƕ�ά����
	��ά�����������
		float rain[5][12];	//rain�������5��float���飬ÿ��float����
							//����12��floatԪ��
		float matrix[4][5];	//�þ�����4��5��
	
	��ά����ķ��ʣ�
		����һ��4��5�еľ��󣬶�Ӧ�ĸ���Ԫ������
		matrix[0][0] matrix[0][1] matrix[0][2] matrix[0][3] matrix[0][4]
		matrix[1][0] matrix[1][1] matrix[1][2] matrix[1][3] matrix[1][4]
		matrix[2][0] matrix[2][1] matrix[2][2] matrix[2][3] matrix[2][4]
		matrix[3][0] matrix[3][1] matrix[3][2] matrix[3][3] matrix[3][4]
	
	��ά����ĳ�ʼ����
		float matrix1[2][3] = { {1, 2, 3}, {4, 5, 6} };	//����
		float matrix2[2][3] = { 1, 2, 3, 4, 5, 6 };		//����
		float matrix3[][3] = { {1, 2, 3}, {4, 5, 6} };	//���������Ƶ���matrix3[2][3]
		float matrix4[2][] = { {1, 2, 3}, {4, 5, 6} };	//���У���������ͨ����
		float matrix5[2][3] = { {1, 2}, {3} };		//  ��Ӧ���� | 1 2 0 | 
													//			 | 3 0 0 |
													
		float matrix6[2][3] = { 1, 2, 3, 4};		//  ��Ӧ���� | 1 2 3 |
													//			 | 4 0 0 |
													 
	ע�⣡���ڶ�ά������˵������Ҳ��һ��Ԫ�أ���������֮��Ҫ�ö��Ÿ�����
	
	Ҫ����Nά������������ݣ�����Ҫʹ��N��Ƕ��ѭ��
	
	��ά����ĸ�ֵ��
	scanf("%f",&matrix[1][1]);	//����
	scanf("%f",matrix[2] + 1);	//���ԣ���matrix[2][1]��ֵ
	scanf("%f",matrix + 1);		//���ԣ���matrix[1][0]��ֵ 
	 
*/
