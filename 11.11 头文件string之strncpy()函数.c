#include <stdio.h>
#include <string.h>

int main()
{
	char str1[30];
	const char * str2 = "  Hello World!";
	
	strncpy(str1, str2, 7);
	str1[7] = '\0';		//�ǵ�����'\0' 
	
	puts(str1);

	
	strncpy(str1, str2 + 2, 6);		//��str2��3������8���ַ����Ƹ�str1
	str1[6] = '\0';
	
	puts(str1);
	
	
	strncpy(str1 + 6, str2 + 2, 4);		//��str[5]��str2��3����6���ַ����Ƹ�str1 
	str1[10] = '\0';		//���������ȷ��λ������'\0' 
	
	puts(str1);
	return 0;
}

/*
	strcpy()������ԭ�����£�
	char * strncpy(char * _Dest, const char * _Source, size_t _Count);
	
	����ֵ��_Dest����ĵ�ֵַ
	��һ�������ǽ��ܸ��Ƶ��ַ�����
	�ڶ���������Ҫ���Ƶ��ַ���
	������������Ҫ����Դ�ַ�����ǰ_Count���ַ� 
	
	��ע�⡿�����޶��ַ����󣬻���Ҫ�˹����ַ���ĩβλ������'\0' 
	һ������ӷ���ֵʹ�á��ú����޶���������ַ���������԰�ȫ�����ҿ���ָ��Ҫ���Ƶ��ַ�������
	 
	�������÷������£�
	strncpy(str1, str2, 5);	//����str2��ǰ5���ַ� 

 
*/
