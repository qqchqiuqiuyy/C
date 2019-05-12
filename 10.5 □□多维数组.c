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
	};	//5年内12个月的降水量数据 
	int year, month;
	float subtot, total;	//年降水量 总降水量 
	
	printf(" 年份      降水量(英寸)\n");
	for (year = 0, total = 0; year < YEARS; ++year)
	{
		for (month = 0, subtot = 0; month < MONTHS; ++month)
			subtot += rain[year][month];
		printf("%5d %15.1f\n", 2011 + year, subtot);
		total += subtot;
	}
	
	printf("2011-2015年的平均年降水量是 %.1f 英寸\n\n", total / YEARS);
	printf("五年来每个月的降水量:\n");
	printf(" 年\\月  Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
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
	多维数组使得数据可以从一维扩展到多维，比如要想体现矩阵，就可以使用
二维数组；要想体现由多个长方体容器摆放在一起形成的大型长方体，可以使用
三维数组。当然，最常用的还是二维数组
	二维数组的声明：
		float rain[5][12];	//rain数组包含5个float数组，每个float数组
							//内有12个float元素
		float matrix[4][5];	//该矩阵是4行5列
	
	二维数组的访问：
		对于一个4行5列的矩阵，对应的各个元素如下
		matrix[0][0] matrix[0][1] matrix[0][2] matrix[0][3] matrix[0][4]
		matrix[1][0] matrix[1][1] matrix[1][2] matrix[1][3] matrix[1][4]
		matrix[2][0] matrix[2][1] matrix[2][2] matrix[2][3] matrix[2][4]
		matrix[3][0] matrix[3][1] matrix[3][2] matrix[3][3] matrix[3][4]
	
	二维数组的初始化：
		float matrix1[2][3] = { {1, 2, 3}, {4, 5, 6} };	//可行
		float matrix2[2][3] = { 1, 2, 3, 4, 5, 6 };		//可行
		float matrix3[][3] = { {1, 2, 3}, {4, 5, 6} };	//编译器会推导出matrix3[2][3]
		float matrix4[2][] = { {1, 2, 3}, {4, 5, 6} };	//不行！编译器不通过！
		float matrix5[2][3] = { {1, 2}, {3} };		//  对应矩阵 | 1 2 0 | 
													//			 | 3 0 0 |
													
		float matrix6[2][3] = { 1, 2, 3, 4};		//  对应矩阵 | 1 2 3 |
													//			 | 4 0 0 |
													 
	注意！对于二维数组来说，数组也是一个元素，所以数组之间要用逗号隔开！
	
	要访问N维数组的所有数据，就需要使用N重嵌套循环
	
	二维数组的赋值：
	scanf("%f",&matrix[1][1]);	//可以
	scanf("%f",matrix[2] + 1);	//可以，给matrix[2][1]赋值
	scanf("%f",matrix + 1);		//可以，给matrix[1][0]赋值 
	 
*/
