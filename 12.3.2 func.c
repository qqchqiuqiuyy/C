#include <stdio.h>
int times = 8;

//�˴������� extern int num; 

extern void func()
{
	static int num3;	//num3�Ǿֲ���̬������һ�����������������ñ�����������ֻ����func()��ʹ�á�ֱ�����������num3�Ż����� 
	printf("����func()��������%d��\n", ++num3);
}
