#include <stdio.h>
#include <stdlib.h>		//ʹ��atoi()����

int main()
{
	int num1 = atoi("42");			//num1��42 
	int num2 = atoi("-35.2");		//num2��-35 
	int num3 = atoi("17qfjkfd");	//num3��17 
	int num4 = atoi("sdfjk");		//num4��0
	printf("%d\n", atoi("jk123")); 
	int num5 = atoi("2147483648");	//���ֹ��󣬲�ͬ�������в�ͬʵ�֡���Dev-C++���ǻ����磬VS�Ļ�������ֵΪINT_MAX 
	printf("%d %d %d %d %d", num1, num2, num3, num4, num5);
	puts("");
	
	double num6 = atof("13");		//num6��13.0
	double num7 = atof("13.25");	//num7��13.25
	double num8 = atof("-25.5asjioffds");	//num8��-25.5
	double num9 = atof("3.3333333333 / 3");	//num9��3.333333
	double num10 = atof("5.3e-2");	//num10��0.053000
	double num11 = atof("1.0e1000");	//num11���������磬����������
	double num12 = atof("1.0e-1000");	//num12��С�������磬���������С 
	 
	
	printf("%f %f %f %f %f %f %f", num6, num7, num8, num9, num10, num11, num12); 
	return 0;	
} 

/*
	atoi()����λ��ͷ�ļ�stdlib.h�ڣ�����ԭ���ǣ�
	int atoi(const char * _Str);
	�ṩһ���ַ���������ת����int
	������ַ�����һ����ĸ�������ֻ򸺺ţ�����ܷ���0
	������ַ�����ͷ�����ֻ򸺺ţ�����һ·��ȡ�����ַ�ֱ�������������ַ���'\0'���� 

	atof()����λ��ͷ�ļ�stdlib.h�ڣ�����ԭ���ǣ�
	double atof(const char * _Str);
	�ṩһ���ַ���������ת����double
	������ַ�����һ����ĸ�������ֻ򸺺ţ�����ܷ���0.0
	������ַ�����ͷ�����ֻ򸺺ţ�����һ·��ȡ�����ַ�(������һ��С���㼰e)ֱ�������������ַ���'\0'���� 
*/ 
