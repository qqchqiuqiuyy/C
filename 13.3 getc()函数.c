#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE * fp = fopen("test3.txt", "r");
	if (!fp)
	{
		printf("�ļ���ʧ�ܣ�\n");
		exit(1);
	}
	char ch; 
	while((ch = getc(fp)) != EOF)
		putchar(ch);
	fclose(fp);
	return 0;
}

/*
	getc()����ԭ�����£�
	int getc(FILE *_File); 
	��getchar()����ԭ�����£�
	int getchar(void); 
	���getchar()����ഫ��һ��FILEָ�뼴��
	���ļ�����ȡһ���ַ�������֮ 

*/
