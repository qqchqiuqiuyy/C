#include <stdio.h>

int main()
{
	printf("%s\n","apple");	//"apple"��һ��const char [6](��const char *) 
	printf("%c\n",*"apple");	//��ָ�������� 
	printf("%c\n","apple"[3]);	//��ָ��ʹ��������(�±귨) 
	printf("%p\n","apple");
	//printf("%p\n", 4);	//���У� 
	
	return 0;
} 
