#include <stdio.h>

#define SEC_PER_MIN 60  //#define�Ǻ궨����䣬����SEC_PER_MINΪ60 
						//�ڱ��������������SEC_PER_MIN�ı��������滻��60 
						//���Ա������ǲ���ʶSEC_PER_MIN��������ģ�Ҳ������
						//���������� 
int main()
{
	int sec, min, left;
	
	printf("����Ҫת��������: ");
	scanf("%d",&sec);
	min = sec / SEC_PER_MIN;	//����ʱ���min = sec / 60;
	left = sec % SEC_PER_MIN;
	printf("%d�� = %d�� %d��\n",sec,min,left); 
	
	//ȡ�������ȥ�󱻳�����ȥ��ʣ�ಿ�֣���
	//  11 / -5 = -2����ô 11 % -5 =  1
	// -11 /  5 = -2����ô 11 % -5 = -1
	//  11 /  5 =  2����ô 11 %  5 =  1
	// -11 / -5 =  2����ô-11 % -5 = -1  
}
