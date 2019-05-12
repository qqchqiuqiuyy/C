#include <stdio.h>
#include <math.h> 			 //math.h头文件提供了很多常用的数学函数 
int main()
{
	int x, y;
	printf("Enter the coordinate point A(x,y): ");
	scanf("(%d,%d)",&x,&y);      //必须要按照字符串格式提供输入，比如
								//这里是输入 (整数,整数)  后回车才行 
	float oa = sqrt(x * x + y * y); 
	/*     函数调用的方式是：  函数名(参数或表达式);
	
	       sqrt()函数需要提供一个float值，计算这个数的算术平方根后返回结果
	   需要提供头文件math.h才能用 
		
	       一个函数有返回值时，可以将函数调用得到的返回值赋给相应的变量 
	   这种形式就相当于 y = f(x) 的形式，具体f(x)是怎么做的，这里我
	   们暂时可以不管 
	*/ 
	printf("|OA| equals %f",oa);  //输出float浮点数需要用%f(浮点数格式输出) 
	return 0;
}
