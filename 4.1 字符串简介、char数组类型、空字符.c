#include <stdio.h>
#include <string.h>	//�����ַ�������غ���

#define PROMPT "What's your name?\n"	
#define PRAISE "What a super marvelous name!\n"


/*#define�궨������÷�
  #define A B
  ��д�����ǿ���ʹ��A������B��Ȼ������ڱ����ʱ�������A���Զ��滻ΪB
  ���磺 #define INT_MAX 2147483647
		 int maximum = INT_MAX;	//valid    INT_MAX���ڱ���ʱ��2147483647�滻
		 INT_MAX = 5;			//invaild  INT_MAX���Ǳ�������仰�൱�� 2147483647 = 5; 

*/ 

/*�ַ�������һ�������ַ������У����� 
 	"Hello World" ʵ���ϰ��������ַ�: Hello World\0         
	 ˫���Ų����ַ�����һ���֣������ַ����ı�ʶ  
	 \0�ǿ��ַ����κ��ַ���һ������\0��β��(Ҳ���Դ���) 
	 
  �ַ������ַ�
  'x'��һ���ַ���ֻ��'x'
  "x"��һ���ַ���������'x'��'\0'
*/ 
int main()
{
	char name[20];		//Ҫ�����ַ�����������Ҫ����һ���ַ����飬�ṹΪ��char ������[����]; 
	//�����������20���ַ� 
	printf(PROMPT);		//ʵ���Ͼ���printf("What's your name?\n"); 
	scanf("%s",name);	//%s��ʽ�������ַ�������
	//ע�⣺1.�����������ֲ�Ҫ���ո� 2.�����ַ������ַ�����ʱ���Բ���ȡַ����� 
	printf("Hello, %s. %s",name,PRAISE);
	return 0;  	
} 

