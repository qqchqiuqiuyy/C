#include <stdio.h>

int main()
{
	int count_down = 5;
	while (count_down > 0)
	{
		printf("%d\n",count_down);	//���߸���count_down���Ϻ�׺--��ɾȥ�����������Ҳ�� 
		--count_down;
	}
	printf("Welcome to the Chapter 5: Loop!!!\n");
	return 0; 
}

/*   whileѭ�������ֽṹ��
	
	while (expression)
		statement
		
	//����
	while (expression)
	{
		statements
	}
	
	��expression�Ľ��ֵΪtrue(1)ʱ��ִ����������
*/ 
