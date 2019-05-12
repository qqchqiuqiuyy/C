#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE * fp = fopen("test1.dat", "wb");
	if (!fp)
	{
		printf("�ļ���ʧ��!\n");
		exit(1);
	}
	char str[13] = "Hello World!";
	fwrite(str, sizeof (char), 13, fp);
	fclose(fp);
	
	fopen("test1.dat", "rb"); 
	if (!fp)
	{
		printf("�ļ���ʧ��!\n");
		exit(1);
	}
	char res[13];
	fread(res, sizeof (char), 13, fp);
	printf("%s\n", res);
	fclose(fp);
	return 0;
}

/*
	ע�⣺�������ļ��ĺ�׺��.dat 
	
	fwrite()������ԭ�����£�
	size_t fwrite(const void * _Str,size_t _Size,size_t _Count,FILE * _File); 
	��һ��������Ҫд���ԭʼ���ݣ��������������͵�ָ��
	�ڶ��������Ǹ����͵Ĵ�С 
	������������Ԫ�صĸ�ʽ
	���ĸ��������ļ�ָ��
	
	���سɹ�д�����Ŀ��
	
	ʾ����
	int nums[4] = {1,2,3,4};
	char str[13] = "Hello World!"; 
	fwrite(nums, sizeof (int), 4, fp);	//���ļ�ָ��ĵ�ǰλ��д��4������ 
	fwrite(str, sizeof (char), 13, fp);	//���ļ�ָ��ĵ�ǰλ��д��13���ַ����˴�����ĩβ��\0��
	fwrite(&nums[0], sizeof (int), 1, fp);	//���ļ�ָ��ĵ�ǰλ��д������nums[0]
	
	fread()������ԭ�����£� 
	size_t fread(void * _DstBuf,size_t _ElementSize,size_t _Count,FILE * _File);
	��һ��������Ҫ���ڶ�������飬��������������
	�ڶ��������Ǹ����͵Ĵ�С 
	������������Ԫ�صĸ�ʽ
	���ĸ��������ļ�ָ��
	
	���سɹ��������Ŀ��
	
	����ʾ��  
*/
