#include <stdio.h>

#define HW "Hello World!" 
 
int main()
{
	const char * str = "Hello World!";
	puts(HW);
	puts(str);
	puts(str + 6);	//���¾�ȼ� 
	puts(&str[6]);
	return 0;
	//�����ַ�������Ƚ����⣬������ָ��ָ����ַ�Ϊ��㣬һֱ��������ַ�ֱ������'\0'�������������ָ������/����������ʼ��� 
}
