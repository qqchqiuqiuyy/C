#include <stdio.h>
#include <stdlib.h>	//使用exit()函数 

int main()
{
	FILE * fp = fopen("test.txt", "w");	
	if (!fp)
	{
		printf("打开失败。\n");
		exit(EXIT_FAILURE);
	}
	fprintf(stdin, "Hello World!\n");
	fclose(fp);
	
	return 0;
}

/*
	文件输入输出分两类：文本输入输出、二进制输入输出
	
	这里首先讲文本IO
	
	FILE是结构体类型，它的定义是： 
	  struct _iobuf {
    	char *_ptr;
    	int _cnt;
    	char *_base;
    	int _flag;
    	int _file;
    	int _charbuf;
    	int _bufsiz;
    	char *_tmpfname;
  	};
  	typedef struct _iobuf FILE;
	
	这里不需要知道具体细节，只需知道FILE是结构体类型，而原型是struct _iobuf（粗略了解）
	 
	fopen()函数的原型： 
	FILE * fopen(const char * _Filename,const char * _Mode);
	函数第一个参数是要打开的文件名，比如说要打开当前exe文件所在路径下的test.txt文件的话我们需要提供字符串"test.txt"，
也可以以绝对路径的方式来打开，比如"C:\\Users\\Administrator\\Desktop\\test.txt"。 
	函数第二个参数是打开文件的模式，这里给出模式字符串表，不熟悉可以常去查阅。 
	函数的返回值是FILE指针，如果打开文件失败，返回NULL。 
	
	
	模式字符串				意义
	"r" 					打开一个文本文件，可以读写文件。需要文件存在，否则返回NULL 
	"w"						打开一个文本文件，可以写入文件，先将文件的长度截为零（即清空）。如果文件不存在则先创建之
	"a"						打开一个文本文件，可以写入文件，向已有文件的尾部追加内容，如果该文件不存在则先创建之
	"r+"					打开一个文本文件，可以进行更新、读取和写入。需要文件存在，否则返回NULL  
	"w+"					打开一个文本文件，可以进行更新、读取和写入，如果文件存在则先将文件的长度截为零（即清空）。
							如果文件不存在则先创建之 
	"a+"					打开一个文本文件，可以进行更新、读取和写入，向已有文件的尾部追加内容，如果该文件不存在则
							先创建之；可以读取整个文件，但写入时候只能追加内容 
	"rb" "wb" "ab" "ab+" "a+b" "wb+" "w+b" "ab+" "a+b" 与前面的模式类似，只是使用二进制模式来打开文件 

	比如想要写入test.txt文档，可以：
	FILE * fp = fopen("test.txt", "w");
	想读取test.txt文档，可以：
	FILE * fp = fopen("test.txt", "r");
	其余的模式字符串请自己摸索。
	
	
	fprintf()函数原型：
	int fprintf(FILE * _File,const char * _Format,...);
  	而print()函数原型： 
	int printf(const char *  _Format,...);
	
	fprintf()函数除了新增一个参数FILE指针用于要输出的文件外，其余参数和返回值均与printf()相同 
	当传入的是stdout（标准输出）时，例如fprintf(stdout, "Hello World!\n"); 
	用法就和printf("Hello World!\n");
	相同的了 
	
	
	fclose()函数原型：
	int fclose(FILE *_File);
	保证在打开文件然后不用它的时候调用这个函数关闭，以免再打开的时候访问冲突
	
	 
*/
