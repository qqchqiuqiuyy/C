#include <stdio.h>

union u {
	int i_32;
	short i_16[2];
	char i_8[6];
};


struct s {
	int i_32;
	char i_8;
};

struct ss {
	char i_8;
	struct s st;
	int i_32;
	char i_8_2[4];
};

int main()
{
	printf("sizeof (union u) = %d\n", sizeof (union u));
	printf("sizeof (struct s) = %d\n",sizeof (struct s));
	printf("sizeof (struct ss) = %d\n", sizeof (struct ss));
	return 0;
}

/*
	联合体union也是一种复合类型，不过与结构体不同的是，其内部声明的变量都指向
同一片地址。联合体适用于内存比较小，或者不确定要用什么类型变量的情况。
	联合体类型的声明类似与结构体：
	union u{
		int i_32;
		short i_16[2];
		char i_8[6];
	};	//这样union u就是一种类型
	然后声明联合体变量：
	u val;
	赋值
	val.i32 = 5;
	val.i_16[0] = 3;	//注意！这会覆盖掉i32的内容
	
	
	当结构体的大小不是4的整数倍时，编译器会将其自动扩充为4的整数倍大小，因为
程序在以4个字节为单位访问数据效率最快。同样，编译器在处理int的时候也是速度最
快的 
	例如：
	struct s {
		int i_32;
		char i_8;
	}; 
	
	默认情况下struct s是5个字节，但是由于编译器的数据对齐行为将其扩展为8字节
	
	struct ss {
		char i_8;
		struct s st;
		int i_32;
	}; 
	默认情况下ss是10个字节，但是struct s被扩充为8字节，1+8+4=13，
struct ss会被扩充为16字节。
	虽然说无形之中浪费了一点内存，但是以牺牲内存空间换取效率的思想值得我们学习 

						
*/
