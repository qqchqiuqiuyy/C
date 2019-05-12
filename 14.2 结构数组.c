#include <stdio.h>

struct book {
	char name[40];
	char index[20];
	float price;
};	


int main()
{
	struct book books[3] = {
		{"编译原理", "TP314/A11-2", 55},
		{"计算机图形学", "TP391.41/H34(3)", 89},
		{"计算机操作系统", "TP316/X750.1", 39.8}
	};
	int i;
	for (i = 0;i < 3;++i)
		printf("%s  %s  %.2f\n", books[i].name, books[i].index, books[i].price);
	return 0;
}

/*
	结构数组的声明：
	struct book books[3];
	
	声明了3个结构体构成的数组，每个结构体都有对应的成员
	
	结构数组的初始化：
	和二维数组的初始化类似，看上面即可。 

*/ 

