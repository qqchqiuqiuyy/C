#include <stdio.h>
#include <string.h>

//深度复制 
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
	printf("交换前:\n");
	printf("%s\n%s\n", strs[0], strs[1]);
	swap_str(strs[0], strs[1]);
	printf("交换后:\n");
	printf("%s\n%s\n", strs[0], strs[1]);
	return 0;
}

/*
	如果使用浅复制：
	void swap_str(char * _Str1, char * _Str2)
	{
		char * tmp;
		tmp = _Str1;
		_Str1 = _Str2;
		_Str2 = tmp;
	}
	交换的只是指针，但如果是在字符串数组内交换的话是不给通过的，
因为数组内的字符串都是指针常量，不给你交换内存的。
	
	所以应使用strcpy进行深复制 

*/
