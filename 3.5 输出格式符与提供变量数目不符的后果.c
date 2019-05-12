#include <stdio.h>

int main()
{
	int ten = 10, two = 2;
	printf("%d - %d = %d\n",ten,two,ten - two); //参数提供正确 
	printf("%d - %d = %d\n", ten);  //漏掉了两个参数
	printf("%d",ten,two,ten - two);	//参数提供太多(看起来好像没有影响的样子) 
	//如果漏掉参数的话，后两个显示的值将是未知值 
	
	//总之要按照前面格式符的顺序正确地提供变量 
	 
}
