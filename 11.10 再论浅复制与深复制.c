#include <stdio.h>
#include <string.h>

//��ȸ��� 
void swap_str(char * _Str1, char * _Str2)
{
	char tmp[10000];
	strcpy(tmp, _Str1);
	strcpy(_Str1, _Str2);
	strcpy(_Str2, tmp);
}

int main()
{
	char strs[2][10] = {"Hello!", "Hi!"};
	printf("����ǰ:\n");
	printf("%s\n%s\n", strs[0], strs[1]);
	swap_str(strs[0], strs[1]);
	printf("������:\n");
	printf("%s\n%s\n", strs[0], strs[1]);
	return 0;
}

/*
	���ʹ��ǳ���ƣ�
	void swap_str(char * _Str1, char * _Str2)
	{
		char * tmp;
		tmp = _Str1;
		_Str1 = _Str2;
		_Str2 = tmp;
	}
	������ֻ��ָ�룬����������ַ��������ڽ����Ļ��ǲ���ͨ���ģ�
��Ϊ�����ڵ��ַ�������ָ�볣���������㽻���ڴ�ġ�
	
	����Ӧʹ��strcpy������� 

*/
