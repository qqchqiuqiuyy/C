#include <stdio.h>

void print1D(int arr[5])	
{
	int i;
	for (i = 0;i < 8;++i)
		printf("%d ", arr[i]);
	puts("");
}

void print2D(int arr[4][3])
{
	int i = 0, j = 0;
	for (;i < 4;i++)
	{
		for (j = 0;j < 3;j++)
			printf("%d ", arr[i][j]);
		puts("");
	}
		
}

int main()
{
	int nums[8] = {1,2,3,4,5,6,7,8};
	print1D(nums);
	int nums2[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	print2D(nums2);
	
	int a = 5;
	int * b = &a;
	int c = (int) b;
	return 0;
}

/*
	之前说过，传递二维数组时，第二维度必须限定。
	现在来讨论，如果一维数组维度大小 和 二维数组第一维度大小 被限定会如何。 
	运行程序，会发现程序居然是可以运行的。
	原因1：print1D函数的参数[]内带数字和不带数字都是没有区别的，因为实际上
C语言不会检查arr是否真的有5个元素，它也无法知道一个数组是有多少个元素的。
	原因2：print2D函数限定第二维度是必须的，因为这样对指针arr做加法时就知
道该跳多少字节。但同样它不会检查传递过来的数组第二维度是不是3。因为arr和nums2
都属于二重指针的范畴，尽管arr是int (*)[4]，nums2是int (*)[3]，但是他们的确可以
进行传递，实际上经历了这样的强制转换：
	int (*arr)[3] = (int (*)[3])nums2;
	但是，编译器会提示Warning 
	
	注意： int *型和 int **型不能相互隐式传递
	 	   int型和int *型不能相互隐式传递 
	
	但是！！！！正因为C语言过于宽松的强制类型转换，可能导致了各种问题的出现：
	int a = 5;
	int * b = (int *) a;   //int*给int这居然也是可行的？
	
	
	int a = 5;
	int * b = &a;
	int c = (int) b;		//int给int*又可以？？
	同样这两个会提示Warning
	 
	所以使用指针时一定要十分谨慎，要正确使用，根据函数参数类型对应使用，不要出现不必要的隐式转换。 
*/
