#include <stdio.h>

struct book {
	char name[40];
	char index[20];
	float price;
};	

int main()
{
	struct book cpp = {"C++ Primer Plus(第5版)","TP312C/P976-3", 72 };
	printf("书名: %s\n索引号: %s\n价格: CNY%.2f\n", cpp.name, cpp.index, cpp.price);
	printf("输入书名: ");
	gets(cpp.name);
	printf("输入索引号: ");
	scanf("%s", cpp.index);
	printf("输入价格: ");
	scanf("%f", &cpp.price);
	printf("信息如下:\n");
	printf("书名: %s\n索引号: %s\n价格: CNY%.2f\n", cpp.name, cpp.index, cpp.price);
	
	return 0; 
}

/*
	结构体是一种复合类型，它的成员可以是任何一种C的数据类型，乃至结构体以及别的复合类型！ 
	结构体，顾名思义就是储存一个结构的各种信息。比如一个人有身高体重等各种信息糅合在一起。
	
	结构声明：
	struct 结构名 {
	    int A;
		float B; 
		...
	};		//分号不能漏，在} 和; 之间可以同时声明变量 
	
	示例：
	struct book {
		char name[40];
		char index[20];
		float price;
	} cpp, cpppp;	//同时声明了结构体变量cpp和cpppp 
	
	结构变量声明：
	struct 结构名 变量名; 
	
	示例：
	struct book mybook;		//struct book是结构体变量类型，而mybook则是变量名
	
	结构变量初始化：
	对于struct book，可以这样操作
	struct book mybook = {"C++ Primer Plus(第5版)","TP312C/P976-3", 72 }; 
	
	
	访问结构成员：
	对于结构体，我们可使用成员运算符 . 来访问成员
	mybook.price = 5;	//mybook的成员price被赋值为5
	strcpy(mybook.name, "C Primer Plus");	//mybook的成员name被赋上字符串"C Primer Plus"
	而由于.的优先级比&高，所以在输入时可以直接这样：
	scanf("%d", &cpp.price);
	而不用 &(cpp.price)
	 
	
	
*/
