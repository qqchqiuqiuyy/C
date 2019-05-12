#include <stdio.h>

void transport_4x4(int (*)[4]); //函数原型的变量名可以省略
//如果你想传递一个二维数组，那么你需要用到 指向数组的指针
//而指向数组的指针要求第二维必须是固定值
//所以int (*)[4] 或 int [4][4]都是可以的，它们作为参数时都是指针，而不是数组！
//在调用函数的时候传递的自然也是二维数组的数组名！ 
 
int main()
{
	int matrix[4][4], i, j;
	printf("输入一个4*4矩阵：\n");
	for (i = 0; i < 4; ++i)
		for (j = 0; j < 4; ++j)
			scanf("%d", &matrix[i][j]);
	transport_4x4(matrix);
	printf("转置后：\n");
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
