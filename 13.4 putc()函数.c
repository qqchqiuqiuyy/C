#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE * fp = fopen("test4.txt", "w");
	if (!fp)
	{
		printf("�ļ���ʧ�ܣ�\n");
		exit(1);
	}
	char ch; 
	while((ch = getchar()) != EOF)
		putc(ch, fp);
	fclose(fp);
	return 0;
}

/*
	putc()������ԭ�����£�
	int putc(int _Ch,FILE *_File); 
	��putchar()������ԭ�����£�
	int putchar(int _Ch);
	ͬ��Ҳ�Ƕ���FILEָ�룬�����ļ�ָ��ָ����ļ����һ���ַ� 

*/ 
