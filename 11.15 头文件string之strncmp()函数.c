#include <stdio.h>
#include <string.h>

int main()
{
	const char * str1 = "computer";
	const char * str2 = "compute";
	const char * str3 = "caculate";
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
	printf("%8s �� %8s �Ƚϣ����Ϊ %d\n", str1, str2, strncmp(str1, str2, 5));
	printf("%8s �� %8s �Ƚϣ����Ϊ %d\n", str1, str3, strncmp(str1, str3, 5)); 
	printf("%8s �� %8s �Ƚϣ����Ϊ %d\n", str2, str1, strncmp(str2, str1, 5));
	printf("%8s �� %8s �Ƚϣ����Ϊ %d\n", str3, str1, strncmp(str3, str1, 5));
	return 0;
}

/*
	strncmp()������ԭ�����£�
	int strncmp(const char * _Str1, const char * _Str2, size_t _Count);
	����ֵ�Ƿ��������ַ����ȽϵĽ��
	����������Ҫ�Ƚϵ��ַ���
	������������Ҫ�Ƚϵ�ǰ_Count���ַ�
	
	�ú��������ڶԱ������ַ���֮�����Ӧλ�õļ����ַ����磺
	strncmp("transform","translate",5)	���������ַ���ǰ����ַ���ƥ�䣬����0
	strncmp("transform","translate",6)	����transf���ֵ������translС�����Է��ظ���(��һ����-1) 
	strncmp("translate","transform",6)	����transl���ֵ������transf�����Է�������(��һ����1) 
	 
	ͨ���ı�_Str1��_Str2�ĳ�ʼָ��λ�ã����Ծ����ӵڼ����ַ���ʼ�Ƚϣ��磺
	strncmp(str1 + 3, str2 + 3, 3)	�Ա������ַ����ĵ�4������6���ַ��Ƿ�ƥ��												 
*/ 
