#include <stdio.h>
#include <stdbool.h>

/* ��C�����У���ʵ��������һ�ֱ������ͣ� _Bool         //����ֵ 
   ���ı�����ֵ��1����true��0����false
   ���ֱ������Ͷ����ڱ��ʽ�У��÷�Ϊ��
   	    _Bool isPrime = 1;
		if (isPrime)	//��ʾ��������� 
			...			//��ĳЩ�� 
			
   ����Ϊ���ܼ���C++(��ΪC++ʹ��bool��true��false����Cû��)������ʹ��ͷ�ļ�stdbool.h
   ��������������Ҫ��#define��䣺
	#define bool	_Bool
	#define true	1
	#define false	0
   ���������ǾͿ���ֱ��ʹ��bool������_Bool��true����1��false����0��
   ���磺
   		bool isPrime = true;	
		if (isPrime)
			... 
			
	��Ȼ����Ҳ����ֱ�������C���Դ����м����������д��룺
	#define bool	_Bool
	#define true	1
	#define false	0 
	
	��Ȼ���ǲ���һ��  #include <stdbool.h>  ���ÿ�
*/ 

int main()
{
	unsigned num;
	unsigned div;	//���ܵ�Լ��
	bool isPrime;	//�Ƿ�Ϊ����(����ֵΪtrue) 
	
	printf("����һ��������ʾ����Լ��<����q����>: ");
	
	/*ʹ��scanf()������whileѭ��������ȡ��������forѭ�����ȳ�ʼ������2�����ٶ�����������
	  ֱ��������ƽ��Ҫ�������������ͽ�����⡣�ڲ���if��������ܲ��ܱ���������������ܣ�
	  ��isPrimeΪfalse��Ȼ��������ĳ�����ѭ�����������isPrimeΪtrue������������ 
	*/
	while (scanf("%u",&num)) 
	{
		for (div = 2, isPrime = true; (div * div) <= num; ++div)	 
		{
			if (num % div == 0)
			{
				if ((div * div != num))
					printf("%u���Ա� %u �� %u ����\n", num, div, num / div);
				else
					printf("%u ���Ա� %u ����\n", num, div);
				isPrime = false;
			}
		}
		if (isPrime)
			printf("%u ��һ������\n", num);
		printf("\n��������һ����������ʾ����Լ��<����q����>: ");
	}
	return 0;
}
