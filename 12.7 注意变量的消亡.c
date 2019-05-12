#include <stdio.h>

	

int * create_array()		//这是一个看似运行没有问题，但实际蕴藏危险的函数 
{
	int nums[10] = {0};
	int * p = nums;
	printf("%p\n", p);
	return p;	//这里试图返回一个指向即将消亡的数组的指针！！ 
}

int main()
{
	int * p = create_array();
	p[0] = 2;
	printf("%d\n",p[0]);
	printf("%p\n", p);
	//创建一个新数组后 
	int nums[100000];
	printf("%d\n", p[0]);
	printf("%p\n", nums);
	
	return 0;
}

/* 
	这个程序危险就在于等create_array()函数运行结束后，p指向了nums，然而nums是自动变量，离开函数后
会失去对其管辖内存区域的控制权。 
	第一次输出p[0]时p看似是正常的。
	但是后面的变量、数组的新建等都很可能会占用这片内存（因为这片内存未被占领），使用指针p就有可能
导致修改到不该修改的新变量或新数组。并且p[0]的值也会不可预料。所以要极力避免这种情况！ 
*/
