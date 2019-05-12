#include <stdio.h>

int main()
{
	char name[80];	//分配空间
	char * str;
	printf("输入你的姓名: ");
	str = gets(name);		//尝试运行时输入Golden Freeman  这里str承接了name所在的地址，只是作为示例展示如何利用gets的返回值而已。
							//当gets()输入出错或者遇到文件尾，它将返回一个空指针(NULL)吗，利用这个特性我们 一行行循环输入 时可以这样做
							//  while (gets(name) != NULL)
							//		statement;
	//常用的调用应该是gets(name);	
	//直接无视返回值 
							 
	printf("你好啊！ ");
	puts(str); 		
	return 0;
}

/*
	对于字符串的输入，你不应该：
	char * name;
	scanf("%s", name); 
	因为name没有分配内存，指向未知地址，直接对其写入会导致内存访问错误。
	
	正确的做法是：
	char name[20];
	scanf("%s", name);
	//name已经分配了20个字节供读写数据。
	//注意！scanf()函数默认跳空格，换行符和制表符
	
	为能读取一行字符，我们可以使用gets()函数 
	
	gets()函数的原型如下：
	char * gets(char * _Buffer);	//一般可无视返回值，需传入一个字符串用于写入，返回的是读入字符串的地址 
	
	调用如下：
	char name[20];
	gets(name); 
	
	当输入遇到换行符时，在字符串末端添上\0，并将换行符从缓冲区中丢弃。 
*/
