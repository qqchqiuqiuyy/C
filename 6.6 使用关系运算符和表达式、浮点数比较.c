#include <stdio.h>
#include <math.h>		//ʹ��fabs()�����������ظ������ľ���ֵ 

int main()
{
	const double Pi = 3.14159;
	double response;
	printf("What is the value of pi?\n");
	scanf("%lf",&response);			//��˵��������doubleֵ�ø�ʽ��%lf 
	while (fabs(response - Pi) > 0.00001)	//���ڸ��������Ȳ��ɱ����������Ҫ�Ƚ��������Ƿ���ȣ� 
	{										//��Ƚ϶���֮��ľ���ֵ�Ƿ�С�ڵ���10e-6
		printf("Try again!\n");
		scanf("%lf",&response);
	}
	printf("close enough!\n");
	return 0;
	
}

/* ������ϵ��������£�
	�����			����
	 <				С��
	 <=				С�ڻ����
	 ==				����
	 >=				���ڻ����
	 >				����
	 !=				������ 
	 
	ע�⣡�����Ⱥ��� ==  ��ֵ������� =  �벻Ҫ��죡 


*/ 

