#include <stdio.h>
#include <string.h>

int main()
{
	const char * str1 = "computer";
	const char * str2 = "compute";
	const char * str3 = "caculate";
	const char * str4 = "critical";
	char str[20];
	printf("��ƴд�������Ӣ�ĵ��ʣ�");
	gets(str);
	while (strcmp(str, str1))
	{
		printf("����%s������һ�Σ�", str);
		gets(str);
	}
	puts("���ˣ�");
	
	puts("");
	printf("%8s �� %8s �Ƚϣ����Ϊ %d\n", str1, str2, strcmp(str1, str2));
	printf("%8s �� %8s �Ƚϣ����Ϊ %d\n", str1, str3, strcmp(str1, str3)); 
	printf("%8s �� %8s �Ƚϣ����Ϊ %d\n", str2, str1, strcmp(str2, str1));
	printf("%8s �� %8s �Ƚϣ����Ϊ %d\n", str3, str1, strcmp(str3, str1));
	printf("%8s �� %8s �Ƚϣ����Ϊ %d\n", str1, str1, strcmp(str1, str1));
	printf("%8s �� %8s �Ƚϣ����Ϊ %d\n", str2, str4, strcmp(str2, str4));
	return 0;
}

/*
	strcmp()������ԭ�����£�
	int strcmp(const char * _Str1, const char * _Str2);
	����ֵ�Ƿ��������ַ����ȽϵĽ��
	����������Ҫ�Ƚϵ��ַ���
	
	�������ַ������ʱ����������0
	��_Str1���ֵ������_Str2�Ĵ��򷵻�1����֮����-1 
	
	˵�������ַ�����ȵı��ʽ��!strcmp(str1, str2) �� strcmp(str1, str2) == 0
	�Ƚ������ַ�������򲻿ɱȽ϶���ָ�룬��str1 == str2���������Ǵ���ģ�														 
*/ 
