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
	ĳЩ����£�����Ҫ����һ���ṹ���ʱ�򣬴��ݽṹ��ָ��Ȱ�ֵ���ݽṹ��������ƣ���Ϊ��
	�β��ǽṹ������Ҫ��׼��һ���ṹ����ռ�ڴ�Ŀռ䣬�ṹ��Խ�Ӵ���ռ�ڴ�ռ�ܴ�
	�����ݽṹ��ָ��ֻ��Ҫռ��4�ֽ�
	
	����һ���ṹ�������ʱ��ֻ��ʹ�ýṹ��ָ����Ϊ���� 
*/
