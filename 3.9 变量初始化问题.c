#include <stdio.h>



int main()
{
	int apples = 3.0;  //���õ������������ø���������int��������ʽת��
	int cost = 12.99;  //�����õ�����������costʱ����ضϺ����0.99(�����������룡)������ʽת��
	float pi = 3.1415926536;  	//��һ��double��������float��������ʽת����
								//����float�ľ���ֻ��֤С����6λ�Ǿ�ȷ�ģ������С��λ���޷���֤��
	float f = 2.33f;    	//����С������Ĭ����double����ʱ��2.33�������f��F��֤����һ��float���������ⲻ��Ҫ����ʽת��
	long l = 24l;			//������Ĭ����int����ʱ��24�������l��L��֤����һ��long��������Ȼ����Ҳ����
	unsigned long us = 233ul;	//ul��׺��ʾ����Ϊunsigned long 
	short sh = 200000;		//����������̫�󣬻ᷢ���ضϣ���ʧǰ�泬����λ�����3392(�Լ���) 
							//dev-c++��������ʾ: [Warning] overflow in implicit constant conversion[-Woverflow]  
	printf("%hd\n",sh);
	
	return 0; 
}
