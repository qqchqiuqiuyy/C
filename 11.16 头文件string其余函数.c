#include <stdio.h>
#include <string.h>

int main()
{
	const char * str = "abstract";
	//�Լ������ðɣ�����дʾ����= =�������������� 
	return 0; 
}

/* 
	strchr()������ԭ�����£�
	char * strchr(const char * _Str, int _Val); 
	�ú�������һ��ָ���ַ���s�д���ַ�_Val�ĵ�һ��λ�õ�ָ��(��־�����Ŀ��ַ�Ҳ���ַ�����һ���֣����Ҳ������������)��
���û�ҵ����ַ��������ͷ��ؿ�ָ�롣
	
	strpbrk()������ԭ�����£�
	char * strpbrk(const char * _Str, const char * _Control);
	�ú�������һ��ָ�룬ָ���ַ���s1�д��s2�ַ����е��κ��ַ��ĵ�һ��λ�á����û�ҵ��κ��ַ��������ͷ��ؿ�ָ�롣
	
	strrchr()������ԭ�����£�
	char * strrchr(const char * _Str, int _Val);
	�ú�������һ��ָ�룬ָ���ַ���s���ַ�c���һ�γ��ֵĵط�(��־�����Ŀ��ַ�Ҳ���ַ�����һ���֣����Ҳ������������)��
���û�ҵ����ַ��������ͷ��ؿ�ָ�롣

	strstr()������ԭ�����£�
	char * strstr(const char * _Str, const char * _SubStr);
	�ú�������һ��ָ�룬ָ��_Str�ַ����е�һ�γ���_SubStr�ַ����ĵط��������_Str��û�ҵ�_SubStr�������ͷ��ؿ�ָ�롣 
*/
