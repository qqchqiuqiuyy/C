#include <stdio.h>
#include <string.h>

int main()
{
	const char * str = "Hello World!";
	printf("%d\n", strlen(str));	//��ϰһ�£��������ʲô��
	printf("%d\n", sizeof str);		//ͬ�ϣ��ش��������ǰ��������str��ʲô���ͣ� 
	printf("%d\n", sizeof "Hello World!");	//ͬ�� 
	return 0; 
}

/*
	����ͷ�ļ�string.h�����һЩ����
	strlen()������ԭ�����£� 
	int strlen(const char * _Str);
	�ṩһ���ַ��������ظ��ַ������ַ�����(��_Strָ����ַ���ʼֱ������'\0'(��������'\0')����) 
	
	
*/
