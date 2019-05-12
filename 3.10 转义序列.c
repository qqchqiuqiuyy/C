#include <stdio.h>

int main()
{
	int password;
	printf("C:\\Users\\Administrator\\Desktop\\Login.exe\n\n");
	printf("\t\t\"中国建设银行\"\n");
	printf("\t银行卡卡号: \t6212263412775130868\n");
	printf("\t密码:\t\t______\b\b\b\b\b\b");
	scanf("%d",&password);
	printf("\a\a\a\n\n\t\t密码错误,您的银行卡被冻结\n\t\t");

	return 0;
}

/*	转义序列
	序列			意义
	\a				警报 (ANSI C)
	\b				光标退1格
	\n				换行符
	\t				水平制表符
	\\				反斜杠(\)
	\'				单引号
	\"				双引号
	\060			打印ASCII码对应字符，这是八进制数，打印字符0
	\x30			打印ASCII码对应字符，这是十六进制数，打印字符0 
*/	 
