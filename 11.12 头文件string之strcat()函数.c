#include <stdio.h>
#include <string.h>

int main()
{
	char str1[20] = "Hello";
	char str2[20] = " World!";
	strcat(str1, str2);
	puts(str1);
	return 0; 
}

/*
	strcat()������ԭ�����£� 
	char * strcat(char * _Dest, const char * _Source);
	
	����ֵ��_Dest
	��һ����������Ҫ��ƴ�ӵ��ַ���
	�ڶ�����������Ҫƴ�ӵ��ַ���
	
	�����������£�
	strcat(str1, str2);
	��str1�ĵ�һ��'\0'��ƴ���ַ���str2 
	strcat(str1, str2 + 2);
	��str1�ĵ�һ��'\0'��ƴ��str2 + 2ָ����ַ��� 
	
*/
