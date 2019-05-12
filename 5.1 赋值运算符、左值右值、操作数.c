#include <stdio.h>

int main()
{
	int jane, tarzan = 3, cheeta = 4;
	
	cheeta = tarzan = jane = 68;
	printf("                  cheeta tarzan jane\n");
	printf("First round score %4d %6d %6d\n",cheeta,tarzan,jane);
	//%正数d 表示开辟(正数)位空格，然后以右对齐的形式在空格内填充数值 
	//%负数d 表示开辟(负数)位空格，然后以右对齐的形式在空格内填充数值
	
	 
	//左值lvalue：可以被修改的值(如变量)
	//右值rvalue：不可以被修改的值(如常变量)、或者不能对其取地址的值(如地址、常量、表达式)
	//在赋值运算符(=)，它的左操作数必须是左值，右操作数可以是左值也可以是右值
	/*	例子： 
		 jane = 5;	  //jane是左值，5是右值(不能对5取值) 
		 jane = tarzan + cheeta;  //因为不可以&(tarzan + cheeta)，所以它是右值
		 jane = tarzen;		//tarzen是左值，但也可以出现在右操作数 
	*/ 
	
	return 0; 
}
