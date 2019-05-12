#include <stdio.h>

int main()
{ 
	typedef long int_32;	//将int_32设置为long的别名	
	size_t size;	//这里size_t实际上就是unsigned long long
					//使用该变量类型通常表明它的长度或大小

	size = sizeof (int_32);
	int_32 a = 5;
	printf("sizeof int_32 = %d Bytes\n",size); 
	printf("sizeof size_t = %d Bytes\n",sizeof (size_t));  //这里不用担心截断使数值变化的问题,因为储存的数一般很小 
					 
	 
 } 
