#include <stdio.h>

int num = 1;

void func();

int main()
{
	printf("num = %d &num = %p\n", num, &num);
	int num = 2;
	printf("num = %d &num = %p\n", num, &num);
	
	//һ������� 
	{
		int num = 3;
		printf("num = %d &num = %p\n", num, &num);
		
		while (--num == 2)	//�˴��Ƕ�ֵΪ3��num���в����Ƚ� 
		{	
			int num = 4;
			printf("num = %d &num = %p\n", num, &num);
			func();
		}
	}
	
	
	
	return 0;
	
}

void func()
{
	int num = 5;
	printf("num = %d &num = %p\n", num, &num);
}

/*
	��������ڲ������˱���ʱ���������ص��ڴ�����ⲿ��ͬ��������Ȼ��ʹ�øñ�����
	������������������ 
*/
