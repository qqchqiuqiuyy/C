#include <stdio.h>

struct book {
	char name[40];
	char index[20];
	float price;
};	

int main()
{
	struct book cpp = {"C++ Primer Plus(��5��)","TP312C/P976-3", 72 };
	printf("����: %s\n������: %s\n�۸�: CNY%.2f\n", cpp.name, cpp.index, cpp.price);
	printf("��������: ");
	gets(cpp.name);
	printf("����������: ");
	scanf("%s", cpp.index);
	printf("����۸�: ");
	scanf("%f", &cpp.price);
	printf("��Ϣ����:\n");
	printf("����: %s\n������: %s\n�۸�: CNY%.2f\n", cpp.name, cpp.index, cpp.price);
	
	return 0; 
}

/*
	�ṹ����һ�ָ������ͣ����ĳ�Ա�������κ�һ��C���������ͣ������ṹ���Լ���ĸ������ͣ� 
	�ṹ�壬����˼����Ǵ���һ���ṹ�ĸ�����Ϣ������һ������������صȸ�����Ϣ�ۺ���һ��
	
	�ṹ������
	struct �ṹ�� {
	    int A;
		float B; 
		...
	};		//�ֺŲ���©����} ��; ֮�����ͬʱ�������� 
	
	ʾ����
	struct book {
		char name[40];
		char index[20];
		float price;
	} cpp, cpppp;	//ͬʱ�����˽ṹ�����cpp��cpppp 
	
	�ṹ����������
	struct �ṹ�� ������; 
	
	ʾ����
	struct book mybook;		//struct book�ǽṹ��������ͣ���mybook���Ǳ�����
	
	�ṹ������ʼ����
	����struct book��������������
	struct book mybook = {"C++ Primer Plus(��5��)","TP312C/P976-3", 72 }; 
	
	
	���ʽṹ��Ա��
	���ڽṹ�壬���ǿ�ʹ�ó�Ա����� . �����ʳ�Ա
	mybook.price = 5;	//mybook�ĳ�Աprice����ֵΪ5
	strcpy(mybook.name, "C Primer Plus");	//mybook�ĳ�Աname�������ַ���"C Primer Plus"
	������.�����ȼ���&�ߣ�����������ʱ����ֱ��������
	scanf("%d", &cpp.price);
	������ &(cpp.price)
	 
	
	
*/
