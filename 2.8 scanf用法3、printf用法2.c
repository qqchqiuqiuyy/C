#include<stdio.h>

int main()
{
	int chinese, math, english;
		//һ���������������� 
	printf("Enter your score of Chinese,Maths and English: ");
	scanf("%d%d%d",&chinese,&math,&english);
		//һ��Ҫ��������������ʱ��ֱ�ӽ�%d������һ�𼴿�,������ʱ�ÿո���� 
	printf("Your total score is %d\n",chinese + math + english);
		//����ﲻ�������Ǳ������������Ǳ��ʽ 
	printf("Frank's total score is %d and Lee scores %d",336,344);
		//��������һ������ 
	return 0;
}
