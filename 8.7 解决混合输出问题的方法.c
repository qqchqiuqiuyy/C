#include <stdio.h>
#include <stdbool.h>
int main()
{
	int ch;				//Ҫ��ӡ���ַ� 
	int rows, cols;		//���������� 
	int i, j;
	printf("����Ҫ��ӡ���ַ�����ӡ������������: \n");
	while ((ch = getchar()) != '\n')
	{
		if (scanf("%d%d",&rows, &cols) != 2)	//�������������û�гɹ���ȡֵ����Ӧ����ѭ�� 
			break;
		for (i = 0; i < rows; ++i)
		{
			for (j = 0; j < cols; ++j)
				putchar(ch);
			putchar('\n');
		}
		printf("�ٴ�������һ��Ҫ��ӡ���ַ�����ӡ������������\n");
		printf("����ֱ�Ӱ��س�����\n");
		
		while (getchar() != '\n')		//�����ڻ��������ַ���� 
			continue; 
	} 
	printf("�ټ�!\n");
	return 0;
}


