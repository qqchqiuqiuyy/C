#include <stdio.h>
#include <string.h>

int main()
{
	char str1[30];
	const char * str2 = "Hello World!";
	char * str3 = strcpy(str1, str2);
	//���õķ���Ӧ����strcpy(str1, str2);	//ֱ�����ӷ���ֵ 
	puts(str1);
	printf("str1 = %p\n", str1);
	printf("str2 = %p\n", str2);
	printf("str3 = %p\n", str3);
	
	strcpy(str1, str2 + 6);		//��str2��7���ַ���ʼ���Ƹ�str1 
	puts(str1);
	
	strcpy(str1 + 6, str2);		//��str1�ĵ�7���ַ�λ�����ַ���str2���ƹ�ȥ
								//���ܴ�str1 + 7�Ժ��λ�ø�ֵ����Ϊstr1[6]��'\0'������ַ����޷�����str1[6]������ַ� 
	puts(str1); 
	
	return 0;
}

/*
	strcpy()������ԭ�����£�
	char * strcpy(char * _Dest, const char * _Source);
	
	����ֵ��_Dest����ĵ�ֵַ
	��һ�������ǽ��ܸ��Ƶ��ַ�����
	�ڶ���������Ҫ���Ƶ��ַ���
	
	�������÷������£�
	strcpy(str1, str2); 

*/
