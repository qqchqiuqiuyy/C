#include <stdio.h>
#include <limits.h>
int main()
{
	char ch;	//char型变量用于表示字符，但其本质依然是8位二进制数，也可以当一个迷你int 
	printf("Enter a character.\n");
	scanf("%c", &ch); 	//对于char，我们需要使用格式符%c
	printf("The code for %c is %d.\n",ch,ch);	//以%c形式输出ch会打印其字符，而以%d形式输出ch会打印其ASCII码
	printf("Let's see what happen if we add 1 to the character.\n");
	ch = ch + 1;	 
	printf("It becomes %c and its ASCII code is %d.\n\n",ch,ch);
	printf("The size of char: %d\n",sizeof ch);	//输出char变量字节大小 
	printf("The range of char: [%d,%d]\n",CHAR_MIN,CHAR_MAX);	//输出char变量取值范围
	
	//char变量的赋值 
	//char ch;   
	//ch = 'T';		//vaild,字符是由单引号引住的
	//ch = T;		//invalid,T是一个变量(除非T是char)
	//ch = "T";		//invalid,"T"是一个字符串
	//ch = 65;		//valid,但这不是一种好的编程风格  	
	return 0; 
}
