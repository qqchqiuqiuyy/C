#include <stdio.h>
#define ENDLINE '\n'
#define SPACE   ' '

int main()
{
	char ch;
	int spaces = 0;	//ͳ�ƿո��� 
	ch = getchar();	//����һ���ַ�(��Ҫ����)�������������س���ѭ�����������ַ� 
	while (ch != ENDLINE)
	{
		if (ch == SPACE)
		{
			++spaces;
			putchar(ch);	//���һ���ַ� 
		}
		else
			putchar(ch + 1);	
		ch = getchar();
	}
	putchar(ch);
	printf("\nһ����%d���ո�",spaces);
	return 0;
}

/*
	getchar()����ͨ����������򻺳���(����Ĳ����ַ�)��ȡһ���ַ���������ASCII��
		(��ֱ�Ӹ���char�������õ�����ʽת��) 
	putchar()������Ҫ�ṩһ������(������ASCII��Ҳ������һ���ַ�)��Ȼ��������
	    �ַ�����Ļ�ϡ�
*/ 
