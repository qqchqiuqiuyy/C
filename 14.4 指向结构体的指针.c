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
	struct book * pbook = books;
	printf("ָ��: %p\n", pbook);
	printf("%s  %s  CNY%.1f\n", pbook->name, pbook->index, pbook->price);
	pbook++;
	printf("ָ��: %p\n", pbook);
	printf("%s  %s  CNY%.1f\n", pbook->name, pbook->index, pbook->price);
	pbook++;
	printf("ָ��: %p\n", pbook);
	printf("%s  %s  CNY%.1f\n", pbook->name, pbook->index, pbook->price);
	
	return 0;
}

/*
	�����ṹ��ָ�룺
	struct book * pbook;	//��ôpbook������struct book *����
	ָ����Ա���ṹ��(Ԫ�ػ�����)�ĵ�ַ
	pbook = books;
	
	ָ����ʽṹ���Ա����ʹ��->�������
	pbook->name
	�ȼ��� *pbook.name
	
	->���������ǽṹ��ָ�룬��.���������ǽṹ����� 
	 
*/
