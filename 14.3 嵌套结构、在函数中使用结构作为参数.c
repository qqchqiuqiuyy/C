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

void show_info(const struct person p);

int main()
{
	struct person p = { "Jamie", 175, 66, {1968, 11, 23}};
	show_info(p);
	
	return 0;	
}

void show_info(const struct person p)
{
	printf("name: %s\nheight: %.1f\nweight: %.1f\nbirth: %d-%d-%d",
		p.name, p.height, p.weight, 
		p.birthday.year, p.birthday.month, p.birthday.day);
}


/*
	Ƕ�׽ṹ��ָ�����ṹ�������Ϊ�ýṹ��ĳ�Ա
	ע�⣺���ܽ��ṹ�屾����Ϊ�ṹ��ĳ�Ա������᲻ͨ������Ϊ����������Ƕ��
	���ýṹ����Ϊ��Ա�� 
	struct person
	{
		char name[20];
		float height;
		float weight;
		struct date birthday;
	}; 
	
	�ڽṹ���ڱ߶��������������Ϊ��Ա�������Ͳ���ֱ�������ṹ���ڶ���Ľṹ����
	struct person
	{
		char name[20];
		float height;
		float weight;
		struct date{
			int year;
			int month;
			int day;	
		} birthday;
	}; 
	
	�����Ļ��ṹ��date�����ⲻ�ɼ�����Ͳ�����ֱ�������ṹ��date�ˡ� 
*/
