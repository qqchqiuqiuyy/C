#include <stdio.h>

int main()
{
	const int lucky_number = 6;
	int guess;
	
	do		//��ִ��ѭ������䣬�ٽ����������ʽ����Ƿ�Ϊ��(����ѭ���������˳�ѭ��) 
	{
		printf("�²��ҵ����������Ƕ���? ");
		scanf("%d", &guess);
	} while (guess != lucky_number);	//������������Ļ����ǻ����ѭ����Ŷ�����в�Ҫ©�˷ֺ� 
	printf("��ϲ�������!\n");
	return 0; 
}

/*  do while�����ʽ���£� 
	do
		statement
	whlie (expression);
	
	��
	do
	{
		statements
	}
	while (expression);
	
	ǧ��ǧ�����������ź���ķֺ�!
	
	do whileѭ����forѭ����whlieѭ��������������ִ��ѭ���壬�ټ������ 
*/ 
