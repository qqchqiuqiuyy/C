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
	struct book * pbook = books;
	printf("指针: %p\n", pbook);
	printf("%s  %s  CNY%.1f\n", pbook->name, pbook->index, pbook->price);
	pbook++;
	printf("指针: %p\n", pbook);
	printf("%s  %s  CNY%.1f\n", pbook->name, pbook->index, pbook->price);
	pbook++;
	printf("指针: %p\n", pbook);
	printf("%s  %s  CNY%.1f\n", pbook->name, pbook->index, pbook->price);
	
	return 0;
}

/*
	声明结构体指针：
	struct book * pbook;	//那么pbook就属于struct book *类型
	指针可以保存结构体(元素或数组)的地址
	pbook = books;
	
	指针访问结构体成员可以使用->运算符：
	pbook->name
	等价于 *pbook.name
	
	->操作对象是结构体指针，而.操作对象是结构体变量 
	 
*/
