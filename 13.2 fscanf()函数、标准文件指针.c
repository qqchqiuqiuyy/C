#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE * fp = fopen("test2.txt", "r");
	char ch;
	if (!fp)
	{
		printf("��test2.txtʧ�ܣ�\n");
		exit(1);
	}
	int a, b;
	fscanf(fp,"%d%d",&a, &b);
	printf("%d + %d = %d", a, b, a + b);
	fclose(fp);
	return 0;
}

/*
	���г���ǰ�ȴ���test2.txt��Ȼ�����ĵ������������������漴�ɡ� 

	fscanf()������ԭ�����£�
	int fscanf(FILE * _File,const char * _Format,...);
	
	��scanf()������ԭ�����£�
	int scanf(const char * _Format,...); 
	
	ͬ��ֻ�Ƕ���Ҫ����һ��FILEָ����ѣ��������������ֵ�����ܻ���һ�� 
	
	��׼�ļ�ָ��
	��׼���� ���ļ�ָ���� stdin�����ڶ�ȡ��������
	��׼��� ���ļ�ָ���� stdout����������ʾ���������
	��׼���� ���ļ�ָ���� stderr��Ϊ���������Ϣ��Ҫʹ�ö�����������Է���׼�����ס 
*/ 
