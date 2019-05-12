#include <stdio.h>

#define MONTHS 12

int main()
{
	int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int index;	//index是索引的意思，以后会用i代替index 
	for (index = 0; index < MONTHS; ++index)
		printf("%d月有%d天\n", index + 1, days[index]);	
	return 0; 
}

/*
	数组(array)是由一系列类型相同的元素组成，在内存分配上，数组的内存是连续的。
	
	数组的声明方法：
	type name[size];
	例如：
	int days[365];		//365个int的数组
	char str[20];		//20个char的数组，可以存字符串
	double price[8];	//8个double的数组
	
	int n[3.5]		//不行！数组大小只能是整数
	int n2[-4]		//不行！数组大小不能是负数
	int n3[2 * 3 + 1]	//可以 
	
	注意：在C语言，中括号内的数只能是常量or符号常量，它不接受const常变量或变量 
	
	
	数组的访问： 
	当你想访问数组的某一元素时，可以使用下标数字访问，即索引(index)
	数组第一个元素的索引是从0开始的，注意！不是1，是0起！
	days[364]   //数组days的第365个元素
	str[0]		//数组str的第1个元素
	price[5]	//数组price的第6个元素
	在学习指针的时候就可以知道为什么数组要从0开始了
	如果尝试days[365]，有的编译器会在运行时报错(提示数组越界)，也有的会直接越界访问。 
	
	
	
	注意：
	()用于函数调用、括号表达式(提升优先级)、强制类型转换等 
	[]用于声明数组、访问数组某一元素等 
	{}用于数组初始化、创建代码块、函数定义等 
*/
