#include <stdio.h>

int main()
{
	const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	//编译器会根据赋初值的元素个数来确定数组大小，所以days[12]属于越界行为 
	int i;
	for (i = 0; i < sizeof days / sizeof (int); ++i)	//使用 sizeof 数组名 / sizeof 数组第一个元素 or (数组类型) 确定数组大小 
		printf("%d月有%d天\n", i + 1, days[i]);
	return 0;
} 
