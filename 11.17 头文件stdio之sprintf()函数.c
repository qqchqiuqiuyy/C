#include <stdio.h>

int main()
{
	char str[3][20];
	int yy, mm, dd, format;
	puts("�������������գ��ÿո������");
	scanf("%d%d%d",&yy, &mm, &dd);
	sprintf(str[0], "����: %d-%d-%d", yy, mm, dd);
	sprintf(str[1], "����: %d/%d/%d", mm, dd, yy);
	sprintf(str[2], "����: %d/%d/%d", dd, mm, yy);
	
	puts("ѡ��Ҫ����ĸ�ʽ����: (1)������ (2)������ (3)������");
	while (scanf("%d", &format) == 0 || (format < 1 || format > 3))
		continue;
	puts(str[format - 1]);
	return 0;
}

/*	
	sprintf()������stdio.h�� 
	sprintf()������stdio.h�� 
	sprintf()������stdio.h�� 
	��Ҫ������˵���飡 
	sprintf()�����������ǽ���ʽ����������ݱ��浽�ַ������У�����ȡ�� 
	
	sprintf()������ԭ�����£�
	int sprintf(char * _Dest,  const char * Format, ...);
	����ֵ��strlen(_Dest)
	��һ��������Ҫ�����λ��(�ַ�����)
	�ڶ��������Ǹ�ʽ���ַ���
	����Ĳ������ݸ�ʽ���ַ����ڸ�ʽ�������ͺ͸������� 
	���磺
	sprintf(str, "%.2f + %.2f = %.2f", f1, f2, f3); 
