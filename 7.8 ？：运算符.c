#include <stdio.h>
#include <ctype.h>
/*
	? :�������һ����Ԫ�������ͨ�����������жϾ������ʽ�Ľ��ֵΪ����֮һ���÷�: 
	expression1 ? expression2 : expression3 
	
	��expression1Ϊ��ʱ�����ֵΪexpression2����֮Ϊexpression3 
*/ 

int main()
{ 
	
	int a = -3, b = -5;
	
	int max = a > b ? a : b;		//�����ҵ����ֵ����max 
	//�ȼ���
	//int max;
	//a > b ? max = a : max = b; 
	printf("max = %d\n",max);
	
	int abs_a = a > 0 ? a : -a;		//����ȡ����ֵ����aΪ����ʱabs_a����-a
	printf("abs_a = %d\n",abs_a);
	
	int lowers = 0, uppers = 0;			//ͳ�ƴ�Сд��ĸ��ʾ�� 
	char ch = 'C';
	islower(ch) ? ++lowers : ++uppers;	//���ʽ����ֱ���޸ı���ֵ 
	printf("lowers = %d, uppers = %d\n", lowers, uppers);
	
	 
}
