#include <stdio.h>

struct book {
	char name[40];
	char index[20];
	float price;
};	


int main()
{
	struct book books[3] = {
		{"����ԭ��", "TP314/A11-2", 55},
		{"�����ͼ��ѧ", "TP391.41/H34(3)", 89},
		{"���������ϵͳ", "TP316/X750.1", 39.8}
	};
	int i;
	for (i = 0;i < 3;++i)
		printf("%s  %s  %.2f\n", books[i].name, books[i].index, books[i].price);
	return 0;
}

/*
	�ṹ�����������
	struct book books[3];
	
	������3���ṹ�幹�ɵ����飬ÿ���ṹ�嶼�ж�Ӧ�ĳ�Ա
	
	�ṹ����ĳ�ʼ����
	�Ͷ�ά����ĳ�ʼ�����ƣ������漴�ɡ� 

*/ 

