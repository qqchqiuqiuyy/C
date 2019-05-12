#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch;
	char reverse[1000] = {0};
	long last_pos, count;
	FILE * fp = fopen("test5.txt", "r+");	
	if (!fp)
	{
		printf("��ʧ�ܡ�\n");
		exit(EXIT_FAILURE);
	}
	
	while ((ch = getc(fp)) != 'W')
		putc(ch, stdout);
	putchar('\n');
	
	printf("��ǰ�ļ�ָ��ָ�����ļ�test5.txt�ĵ�%d���ַ�\n", ftell(fp) + 1);
	fseek(fp, 0, SEEK_END);	//��ȡ�ļ���β�������� 
	last_pos = ftell(fp);
	printf("�ļ�βλ����%d\n", last_pos);	
	
	//�˴���ʼ��ͼ��ת�ļ��ڵ��ַ� 
	for (count = 0; count < last_pos;++count)
	{
		fseek(fp, count, SEEK_SET);
		reverse[last_pos - 1 - count] = getc(fp);
	}
	fseek(fp, 0, SEEK_SET);
	fprintf(fp, "%s", reverse);
	fclose(fp);
	
	return 0;
}

/*
	fseek()������ԭ�����£�
	int fseek(FILE *_File,long _Offset,int _Origin); 
	��һ���������ļ�ָ��
	�ڶ�������������ƫ���� 
	������������ģʽ��������ʶ��ʼ��
	
	�����ķ���ֵ�Ƕ��ļ�ָ��_File�Ĳ��������0�ǲ����ɹ���
�������ͼ�ƶ������ļ��ķ�Χ�Լ���������򷵻�-1 
	
	�ļ�����ʼ��ģʽ
	SEEK_SET		�ļ���ʼ��λ��
	SEEK_CUR		�ļ���ǰ��λ��
	SEEK_END		�ļ���β��λ�� 
	
	ʾ�� 
	"C Primer Plus"
	      ^
	      |�ļ���ǰλ��
		   
	fseek(fp, 0L, SEEK_SET); 	//�ҵ��ļ���ʼ��λ��	ָ��'C' 
	fseek(fp, 10L, SEEK_SET);	//�ҵ� ���ļ���ʼ��λ��ƫ��10���ֽ����ڵ�λ��	ָ��'l' 
	fseek(fp, -2L, SEEK_CUR);	//�ҵ� ���ļ���ǰ��λ��ƫ��-2���ֽ����ڵ�λ��	ָ��'r' 
	fseek(fp, 0L, SEEK_END);	//�ҵ��ļ���β��λ��							ָ��'s'�ĺ��� 
	fseek(fp, -9L, SEEK_END);	//�ҵ� ���ļ���β��λ��ƫ��-9���ֽ����ڵ�λ�� 	ָ��'i' 
	
	ע�⣡��������ʹ�ã�
	long p = SEEK_SET;	//p��0	
	p = SEEK_CUR;		//p��1 
	p = SEEK_END; 		//p��2
	
	��Ϊ��
	#define SEEK_CUR 1
	#define SEEK_END 2
	#define SEEK_SET 0	 
	 
	
	ftell()������ԭ��
	long ftell(FILE *_File);
	���������ļ�ָ�룬���ص�ǰ�ļ�ָ�������ֵi����ָ��i + 1���ֽ�) 
	
	
*/
