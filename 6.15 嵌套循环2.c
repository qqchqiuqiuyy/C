#include <stdio.h>

int main()
{
	const int ROWS = 6;
	const int CHARS = 6;
	int row;
	char ch;
	
	for (row = 0; row < ROWS; row++)
	{
		for (ch = ('A') + row; ch < ('A' + CHARS); ch++)	//�˴��ĳ�ֵ���ⲿѭ���ĵ����仯�����������ʽ���� 
			printf("%c",ch);
		printf("\n");
	}
	return 0;
	
	//ͨ��������Ƕ��ѭ�����γ�ԭ�������֣�
	//1.�ڲ�ѭ���ĳ�ֵ���ⲿѭ���ı仯��Ӱ��
	//2.�ڲ�ѭ���ı��ʽ���ⲿѭ���ı仯��Ӱ�� 
}
