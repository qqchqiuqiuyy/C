#include <stdio.h>

struct date
{
	int year;
	int month;
	int day;	
};


struct person
{
	char name[20];
	float height;
	float weight;
	struct date birthday;
}; 

void show_info(const struct person * p, size_t s)
{
	size_t i;
	for (i = 0;i < s;++i, ++p)
		printf("name: %s\nheight: %.1f\nweight: %.1f\nbirth: %d-%d-%d\n\n",
			p->name, p->height, p->weight, 
			p->birthday.year, p->birthday.month, p->birthday.day);
}

int main()
{
	struct person p[3] = { "Jamie", 175, 66, {1968, 11, 23},
			{"Anna", 158, 51, {1993, 1, 17}}, 
			{ "Ashley", 168, 59, {1972, 5, 11}}};
	show_info(p, 3);
	
	return 0;	
}

/*
	某些情况下，当需要传递一个结构体的时候，传递结构体指针比按值传递结构体更有优势，因为：
	形参是结构体则需要再准备一个结构体所占内存的空间，结构体越庞大，所占内存空间很大。
	而传递结构体指针只需要占用4字节
	
	传递一个结构体数组的时候只能使用结构体指针作为参数 
*/
