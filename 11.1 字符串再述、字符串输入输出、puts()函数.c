#include <stdio.h>

int main()
{
	char sentence[50];
	gets(sentence);
	puts(sentence);	//复述一遍输入的内容 
	
	puts("");	//换行 
	
	const char * months[] = { "January", "February", "March", "April", "May", "June", "July",
		"August", "September", "October", "November", "December"};	//不能写成const char[][]形式 
	int i;
	for (i = 0;i < sizeof months / sizeof (char*); ++i)	//计算char* 元素个数(这里不是char[]，所以char*是固定4字节) 
		puts(months[i]); 
	return 0;	
}

/*
	学完数组和指针后，我们就可以给字符串精确下定义了：
	字符串(string)是一种字符数组，它以'\0'作为结尾，而我们传递字符串是以数组名的形式传递的，也就是
说我们实际上传递的是一个char*(常量字符串为const char*)
	而字符串常量(string constant)，又称字符串文字，是指位于一对双引号中的任何字符。双引号里的字符
加上编译器自动提供的结束标志\0字符，作为一个字符串被储存在内存中 
	例如："apple"是一个const char [6](等价于const char *)
	
	字符串的初始化如下：
	const char * str1 = "apple";	//可以
	const char str2[6] = "apple";	//可以
	const char str3[] = "apple";	//可以，编译器推断出str3元素个数为6 
	char str4[6] = "apple";			//可以
	char * str5 = "apple";			//不推荐这么做，因为你依然不能去修改其指向物(崩溃)，str5不是数组，而且"apple"是一个常量 
	const char str6[50] = "Pen " "pineapple " "apple " "pen";	//可以，四个字符串将串联在一起，
	//形成"Pen pineapple apple pen" 
	const char str7[6] = {'a','p','p','l','e','\0'};	//可以，不过显然我们不会去使用这种初始化形式了 
	
	注意：这种赋值方法只能在初始化完成，于是
	str4 = "apple";		//不可以！ 
	
	
	读取一个不带空格、制表符、换行符的字符串时，可以使用scanf函数： 
	scanf("%s", str); 
	
	而需要读取一行(不带换行符)的字符串时，可以使用gets函数
	gets函数的原型如下：
	char * gets(char *);
	
	使用示例：
	gets(str);	//返回值不需要利用，需要提供的参数是一个char数组(不能是const char[]) 
	
	
	输出一个字符串时，可以使用puts函数(注意！输出这个字符串后它将会换行！)
	puts函数的原型如下：
	int puts(const char *);		//参数是const是指函数不能修改指针指向物，而不是只能提供常量指针
	
	使用示例:
	puts(str);	//输出字符串str并换行 
	puts("apple");	//输出apple并换行 
	puts("");	//直接换行 
	 
	扩充：
	const char * str1 = "apple";	//可以 
	int * nums = {1, 2, 3, 4};	 	//不可以！
	
	原因在于，字符串的保存形式是特殊的，它属于静态储存(static storage)类，如果在一个函数中使用
字符串常量，即使是多次调用这个函数，该字符串在整个运行过程中只储存一份。整个引号中的内容作为指
向该字符串储存位置的指针。这一点与把数组名作为指向数组储存位置的指针类似。

	关于数据的储存形式，在下一章会有详细描述 
*/
