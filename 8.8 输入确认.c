#include <stdio.h>
int main()
{
	char ch;				//Ҫ��ӡ���ַ� 
	int rows, cols;		//���������� 
	int i, j;
	int s_s;			//�ɹ��������
	char invaild_ch;    //�Ƿ��ַ� 
	printf("����Ҫ��ӡ���ַ�����ӡ������������: \n");
	while ((ch = getchar()) != '\n')
	{
		while ((s_s = scanf("%d%d",&rows, &cols)) != 2 || rows < 0 || cols < 0)	//��ֹ����Ƿ��ַ������������������� 
		{
			while ((invaild_ch = getchar()) != '\n')	//��ջ�������ͬʱ����Ƿ��ַ� 
				putchar(invaild_ch);
			if (s_s != 2)
				printf("����һ�����������������ӡ������������: \n");
			else
				printf("������������ӦΪ����!(��ǰ���������Ϊ%d����Ϊ%d)\n"	//���̫�����������Ͼ任�� 
				"�����������ӡ������������: \n", rows, cols); 
		}
		
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
