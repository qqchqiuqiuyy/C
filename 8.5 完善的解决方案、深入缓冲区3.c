#include <stdio.h>
#include <malloc.h>
int main()
{
	int guess = 1;
	char ch;
	printf("�Ժ�����һ��1��20�������һ᳢�Բ�\n");
	printf("��ֻ��Ҫ����Сдy��n�����Ҳ�����û\n");
	printf("��...�������1ô?\n");
	while ((ch = getchar()) != 'y')
	{
		if (ch == 'n')
			printf("��ô...�������%dô?\n", ++guess);
		else
			printf("������Сдy��n����ô?\n");
		while (getchar() != '\n')	//���еȼ���while (getchar() != '\n'); 
			continue;
	}
	printf("�Ҿ�֪������^_^\n"); 
	
	malloc();
	return 0; 
}

/*
	��chȥ�����ַ����ڼ��飬���������y��n�ַ����������ʾ������ȷ���ַ���
	Ȼ����ջ�������
	��ջ�����������仰��
		while (getchar() != '\n')
			continue; 
	
	ֻҪû�������з���getchar()�ͻ�һֱ�ӻ���������һ���ַ�
	
	����������������asdfg��س�
	[a][s][d][f][g][\n]
	ch����a������ʾ��ȥ����Ϸ��ַ���Ȼ���ڲ�ѭ������ջ����� 
	 
*/ 
