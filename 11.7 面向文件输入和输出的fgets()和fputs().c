#include <stdio.h>

int main()
{
	char line1[20], line2[20];
	
	fgets(line1, 20, stdin);
	fgets(line2, 20, stdin);
	fputs(line1, stdout);
	puts("");
	fputs(line2, stdout);
	return 0;
	//这里尝试运行两次，第一次为两个字符数组输入不超过19个的字符，第二次则输入超过20个的字符。分别观察输出结果 
}

/*
	接下来是用于文件的输入输出函数，但这里我们先只讨论其用于原来的标准输入输出
	
	fgets函数的原型如下：
	char * fgets(char * _Buf, int _MaxCount, FILE * _File);
	返回值的字符串是你传入的字符串或NULL
	第一个参数是要用于输入的字符串
	第二个参数则是控制输入的字符个数，若读入的字符过多，它将在读取完第_MaxCount - 1个字符的时候停下，其余的留在缓冲区。在用于读入的字符串后面会补一个'\0'
			如果遇到换行符，则也把换行符读进来，并填充'\0' 
	第三个参数 是文件结构体指针， 但现在若要用于键盘读入，需要提供已经定义好的，名为stdin(标准输入)的文件结构体指针 
	
	
	函数调用：
	fgets(line1, 20, stdin);	//最多读入19个字符 
	当你输入 abcdef[Enter]
	字符串line1为"abcdef\n"
	
	而当你输入abcdefghijklmnopqrstuvwxyz[Enter]
	字符串line1为"abcdefghijklmnopqrs"
	缓冲区则剩下[t][u][v][w][x][y][z][\n]
	
	如果第20个字符刚好是\n，也是将其留在缓冲区中，给字符串最后填充'\0'
	
	
	fputs函数的原型如下：
	int fputs(const char * _Str, FILE * _File);
	返回值是strlen(_Str)
	第一个参数是要输出的字符串
	第二个参数 是文件结构体指针， 但要用于输出到控制台程序，需要提供已经定义好的，名为stdout(标准输出)的文件结构体指针
	
	函数调用
	fputs(line1, stdout);	//输出字符串line1但不换行
	
	
	这里注意一些关系：
	gets()函数丢弃换行符，而puts()函数最后还会输出换行符
	fgets()函数保留换行符，而fputs()函数最后不会输出换行符 
	
	注意： 
	printf("%s\n",string);  等价于  
	puts(string);
	后者可以省略一些字 
	 
*/
