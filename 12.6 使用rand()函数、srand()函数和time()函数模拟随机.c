#include <stdio.h>
#include <stdlib.h>	//ʹ��rand() ��srand() ���� 
#include <time.h>	//ʹ��time() ���� 

int main()
{
	srand((unsigned) time(NULL));
	int i;
	for (i = 0;i < 5;++i)
		printf("%d\n", rand() % 5);	//ȡ0-4��ֵ
	puts("");
	for (i = 0;i < 5;++i)
		printf("%d\n", 3 + rand() % 4);	//ȡ3-6��ֵ
	puts("");
	for (i = 0;i < 5;++i)
		printf("%d\n", rand() % 50 * 2);	//ȡ0-98�ڵ�ż��ֵ 
	return 0; 
}

/*
	 ��������time()��������64λint����srand()����ܲ���unsigned�������time()�ķ���ֵ����ǿ��ת�� 
	 time()����ԭ�ͣ�
	 time_t time(time_t * Time);
	 ���ݵ�ָ�������NULL(��ָ��)�������ݵ���time_tָ�룬�������޸Ĵ������ָ���ֵΪ��1970��1��1�յ����ھ���������
	 ��Ҳ�᷵��������ֵ
	 
	 ����time()�ķ���ֵ���Ǳ仯�ģ���������seed 
	 
	 srand()����ԭ�ͣ�
	 void srand(unsigned int _Seed);	//����һ��seedֵ
	 
	 rand()����ԭ�ͣ�
	 int rand();	//����һ�����ֵ 
	 
	 ��ע�⡿srand()����ֻӦ�ñ�����һ�Σ���������ѭ���ڵ��ã�����Ϊһ��ѭ����ʱ�����뼶�������
	���������ֵ����λ������û�䣩�����������ֵһ���� 
*/ 
