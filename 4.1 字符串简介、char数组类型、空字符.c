#include <stdio.h>
#include <string.h>	//处理字符串的相关函数

#define PROMPT "What's your name?\n"	
#define PRAISE "What a super marvelous name!\n"


/*#define宏定义语句用法
  #define A B
  在写中我们可以使用A来代替B，然后程序在编译的时候检索到A会自动替换为B
  例如： #define INT_MAX 2147483647
		 int maximum = INT_MAX;	//valid    INT_MAX会在编译时被2147483647替换
		 INT_MAX = 5;			//invaild  INT_MAX不是变量，这句话相当于 2147483647 = 5; 

*/ 

/*字符串就是一个或多个字符的序列，例如 
 	"Hello World" 实际上包含如下字符: Hello World\0         
	 双引号不是字符串的一部分，用作字符串的标识  
	 \0是空字符，任何字符串一定是以\0结尾的(也是自带的) 
	 
  字符串与字符
  'x'是一个字符，只有'x'
  "x"是一个字符串，包含'x'和'\0'
*/ 
int main()
{
	char name[20];		//要容纳字符串，我们需要声明一个字符数组，结构为：char 变量名[容量]; 
	//这里可以容纳20个字符 
	printf(PROMPT);		//实际上就是printf("What's your name?\n"); 
	scanf("%s",name);	//%s格式符代表字符串类型
	//注意：1.这里输入名字不要带空格 2.输入字符串给字符数组时可以不用取址运算符 
	printf("Hello, %s. %s",name,PRAISE);
	return 0;  	
} 

