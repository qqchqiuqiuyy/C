#include <stdio.h>

int add(int a, int b); 
int minus(int a, int b);

int main()
{
	//��Щ����ָ��ָ�����ʲô���͵ĺ����� 
	void (*p1)();		
	void (*p2)(int); 	
	int (*p3)(int []);	
	int* (*p4)(int [4], int *);	
	const int* (*p5)(const int *(*p)(int, int), const int []);
	 
	//����ָ�����������
	int (*p[2])(int, int) = {add, minus};
	printf("add(3, 5) = %d\n", p[0](3, 5));		//ʹ�������еĺ��� 
	printf("minus(3, 5) = %d\n", p[1](3, 5));
		
		
	//ʹ��typedef������	
	typedef int(*p_fun)(int, int);
	p_fun func = add;
	printf("func(3, 5) = %d\n", func(3,5));
	
	return 0;
}

int add(int a, int b)
{
	return a + b;
}

int minus(int a, int b)
{
	return a - b;
}

//����ָ��p1ָ����(�޲������޷���ֵ) 
//����ָ��p2ָ����(����Ϊint���޷���ֵ)
//����ָ��p3ָ����(����Ϊint����(ָ��)������ֵint)
//����ָ��p4ָ����(����Ϊint����(4��Ԫ��)��intָ�룬����ֵintָ��)
//����ָ��p5ָ����(����Ϊ����ָ��(����Ϊint��int������ֵΪconst int *)������int����,����ֵconst int *) 


/*
	����ָ���������Ա���ͬһ���͵ĺ�����ַ��������ʽʾ�����£� 
	void (*p1[4])();	//������һ��ָ������(����ָ��void func();���͵ĺ���)������4��ͬ�����͵ĺ���ָ��) 

*/
