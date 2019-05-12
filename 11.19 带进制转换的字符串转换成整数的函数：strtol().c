#include <stdio.h>
#include <stdlib.h>

int main()
{
	char * end;
	const char * strs[4] = {"11010101", "0368", "-275ACM", "4E2APPAP"};
	int nums[4], i, radix[4] = {2, 8, 10, 16};
	for (i = 0; i < 4; ++i)
	{
		nums[i] = strtol(strs[i], &end, radix[i]);	//�Ĵζ����ķֱ���"11010101" "036" "-275" "4E2A" 
		printf("num%d : %5d, stopped at %s(%d)\n", i + 1, nums[i], end, *end);
	}
	return 0;
}

/*
	strtol()������ͷ�ļ�stdlib.h�ڣ�ԭ�����£�
	long strtol(const char * _Str, char ** _EndPtr, int _Radix);
	�������ص���һ��ʮ������
	��һ��������Ҫת�����ַ���
	�ڶ���������Ҫ���ṩһ��char*�ĵ�ַ��_EndPtrָ���־�������ֵĽ����ַ���ָ��ĵ�ַ
	�������������ַ��������ֵĽ�����
	
	ʾ����
	strtol(str, &str_end, 2);	//�ַ����������Ƕ����ƣ�ֻ��'-'��'0'��'1'
	strtol(str, &str_end, 10);	//�ַ�����������ʮ���ƣ�ֻ��'-'��'0'��'9'
	strtol(str, &str_end, 16);	//�ַ�����������ʮ�����ƣ�ֻ��'-'��'0'��'9' �� 'a'��'f'
	�����Ͻ��������Խ��ܴ�2��36������ 
*/
