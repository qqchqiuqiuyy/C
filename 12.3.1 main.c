#include <stdio.h>
#include <stdlib.h>

static int num;		//num��ֵ������0 
extern int times;	//times��func.c����

void func();		//func��func.c���� 
//����������ǰ����static�ؼ���ʱ������������Ϊ��Դ�ļ�������������Ҳ�����ڴ˴�����������������Ĭ��Ϊextern 
 
int main(int argc, char *argv[]) {
	
	printf("num = %d\n", num);
	printf("times = %d\n", times);
	
	for (; num < times; ++num)
		func();
	return 0;
}

/*
	ע�⣡��ĺ����������ܰ���static�ؼ��֣� 
*/
