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
	嵌套结构是指其它结构体变量作为该结构体的成员
	注意：不能将结构体本身作为结构体的成员，编译会不通过。因为这会造成无限嵌套
	放置结构体作为成员： 
	struct person
	{
		char name[20];
		float height;
		float weight;
		struct date birthday;
	}; 
	
	在结构体内边定义边声明变量作为成员，这样就不能直接声明结构体内定义的结构体了
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
	
	这样的话结构体date将对外不可见，你就不可以直接声明结构体date了。 
*/
