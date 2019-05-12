#include <stdio.h>
#include <stdlib.h>	//ʹ��exit()���� 

int main()
{
	FILE * fp = fopen("test.txt", "w");	
	if (!fp)
	{
		printf("��ʧ�ܡ�\n");
		exit(EXIT_FAILURE);
	}
	fprintf(stdin, "Hello World!\n");
	fclose(fp);
	
	return 0;
}

/*
	�ļ�������������ࣺ�ı�����������������������
	
	�������Ƚ��ı�IO
	
	FILE�ǽṹ�����ͣ����Ķ����ǣ� 
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
	
	���ﲻ��Ҫ֪������ϸ�ڣ�ֻ��֪��FILE�ǽṹ�����ͣ���ԭ����struct _iobuf�������˽⣩
	 
	fopen()������ԭ�ͣ� 
	FILE * fopen(const char * _Filename,const char * _Mode);
	������һ��������Ҫ�򿪵��ļ���������˵Ҫ�򿪵�ǰexe�ļ�����·���µ�test.txt�ļ��Ļ�������Ҫ�ṩ�ַ���"test.txt"��
Ҳ�����Ծ���·���ķ�ʽ���򿪣�����"C:\\Users\\Administrator\\Desktop\\test.txt"�� 
	�����ڶ��������Ǵ��ļ���ģʽ���������ģʽ�ַ���������Ϥ���Գ�ȥ���ġ� 
	�����ķ���ֵ��FILEָ�룬������ļ�ʧ�ܣ�����NULL�� 
	
	
	ģʽ�ַ���				����
	"r" 					��һ���ı��ļ������Զ�д�ļ�����Ҫ�ļ����ڣ����򷵻�NULL 
	"w"						��һ���ı��ļ�������д���ļ����Ƚ��ļ��ĳ��Ƚ�Ϊ�㣨����գ�������ļ����������ȴ���֮
	"a"						��һ���ı��ļ�������д���ļ����������ļ���β��׷�����ݣ�������ļ����������ȴ���֮
	"r+"					��һ���ı��ļ������Խ��и��¡���ȡ��д�롣��Ҫ�ļ����ڣ����򷵻�NULL  
	"w+"					��һ���ı��ļ������Խ��и��¡���ȡ��д�룬����ļ��������Ƚ��ļ��ĳ��Ƚ�Ϊ�㣨����գ���
							����ļ����������ȴ���֮ 
	"a+"					��һ���ı��ļ������Խ��и��¡���ȡ��д�룬�������ļ���β��׷�����ݣ�������ļ���������
							�ȴ���֮�����Զ�ȡ�����ļ�����д��ʱ��ֻ��׷������ 
	"rb" "wb" "ab" "ab+" "a+b" "wb+" "w+b" "ab+" "a+b" ��ǰ���ģʽ���ƣ�ֻ��ʹ�ö�����ģʽ�����ļ� 

	������Ҫд��test.txt�ĵ������ԣ�
	FILE * fp = fopen("test.txt", "w");
	���ȡtest.txt�ĵ������ԣ�
	FILE * fp = fopen("test.txt", "r");
	�����ģʽ�ַ������Լ�������
	
	
	fprintf()����ԭ�ͣ�
	int fprintf(FILE * _File,const char * _Format,...);
  	��print()����ԭ�ͣ� 
	int printf(const char *  _Format,...);
	
	fprintf()������������һ������FILEָ������Ҫ������ļ��⣬��������ͷ���ֵ����printf()��ͬ 
	���������stdout����׼�����ʱ������fprintf(stdout, "Hello World!\n"); 
	�÷��ͺ�printf("Hello World!\n");
	��ͬ���� 
	
	
	fclose()����ԭ�ͣ�
	int fclose(FILE *_File);
	��֤�ڴ��ļ�Ȼ��������ʱ�������������رգ������ٴ򿪵�ʱ����ʳ�ͻ
	
	 
*/
