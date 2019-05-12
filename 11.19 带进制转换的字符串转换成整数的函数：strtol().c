#include <stdio.h>
#include <stdlib.h>

int main()
{
	char * end;
	const char * strs[4] = {"11010101", "0368", "-275ACM", "4E2APPAP"};
	int nums[4], i, radix[4] = {2, 8, 10, 16};
	for (i = 0; i < 4; ++i)
	{
		nums[i] = strtol(strs[i], &end, radix[i]);	//四次读到的分别是"11010101" "036" "-275" "4E2A" 
		printf("num%d : %5d, stopped at %s(%d)\n", i + 1, nums[i], end, *end);
	}
	return 0;
}

/*
	strtol()函数在头文件stdlib.h内，原型如下：
	long strtol(const char * _Str, char ** _EndPtr, int _Radix);
	函数返回的是一个十进制数
	第一个参数是要转换的字符串
	第二个参数需要你提供一个char*的地址，_EndPtr指向标志输入数字的结束字符的指针的地址
	第三个参数是字符串内数字的进制数
	
	示例：
	strtol(str, &str_end, 2);	//字符串内数字是二进制，只认'-'、'0'、'1'
	strtol(str, &str_end, 10);	//字符串内数字是十进制，只认'-'，'0'到'9'
	strtol(str, &str_end, 16);	//字符串内数字是十六进制，只认'-'，'0'到'9' 和 'a'到'f'
	理论上进制数可以接受从2到36的整数 
*/
