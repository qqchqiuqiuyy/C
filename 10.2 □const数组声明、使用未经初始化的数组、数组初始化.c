#include <stdio.h>

#define MONTHS 12

int main()
{
	const int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	//使用const声明的数组常变量可以保护内容不被修改，所以一定要赋好初值
	
	int no_init[4] = {1}, i;
	//使用未经初始化的数组
	
	printf("i\tno_init[i]\n");
	for (i = 0;i < 4;++i)
		printf("%d%16d\n", i, no_init[i]);
		
	
	return 0;
}

/* 

	数组的初始化(不能在赋值语句中使用)： 
	如果只有声明而没有赋值的话，其里面的元素都是未知值
	int nums[5] = {};	//nums[0]到nums[4]都被赋0
	int nums[5] = {5};	//nums[0]是5，nums[1]到nums[4]都是0
	int nums[3] = {1,2,3};	//nums[0]是1，nums[1]是2，nums[2]是3

	int nums[] = {1,2,3,4,5};	//编译器会自动推断数组nums有5个元素，所以你不能访问nums[5]
	要确定这种声明方法数组的元素个数，可以使用  sizeof nums / sizeof (int)	来确定
	
	数组的赋值:
	有两个数组
	int a[3] = {1,2,3}, b[3] = {4,5,6};
	a[1] = b[2];	//可以
	a = b;			//不可以！
	a = {4, 5, 6};	//不可以！
	a[3] = b[3];	//不可以！ 
	a[1] = 0;		//可以
	
	当我们使用scanf()对数组元素赋值的时候，我们也需要访问元素所在的地址：
	scanf("%d",a[0]);	//不可以！a[0]不是地址！ 
	scanf("%d",&a[0]);	//可以
	scanf("%d",a);		//可以 
	scanf("%d",a + 4);	//可以，给a[4]赋值。
	 
	 
*/ 
