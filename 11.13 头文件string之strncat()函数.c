#include <stdio.h>
#include <string.h>

int main()
{
	char str1[20] = "Hello";
	char str2[20] = " World!";
	strncat(str1, str2, 3);		//��str1�ĵ�һ��'\0'��ƴ���ַ���str2��ǰ�����ַ� 
	str1[8] = '\0';
	strncat(str1, str2 + 3, 4);		//��str1�ĵ�һ��'\0'��ƴ���ַ���str2 + 3��ǰ�ĸ��ַ� 
	str1[12] = '\0';
	puts(str1);
	return 0; 	
}

/*
	strncat()������ԭ�����£� 
	char * strncat(char * _Dest, const char * _Source, size_t _Count);
	
	����ֵ��_Dest
	��һ����������Ҫ��ƴ�ӵ��ַ���
	�ڶ�����������Ҫƴ�ӵ��ַ���
	������������Ҫƴ�ӵ��ַ����� 
	
	�����������£�
	strcat(str1, str2);
	��str1�ĵ�һ��'\0'��ƴ���ַ���str2 
	strcat(str1, str2 + 2);
	��str1�ĵ�һ��'\0'��ƴ��str2 + 2ָ����ַ��� 
	
*/ 
