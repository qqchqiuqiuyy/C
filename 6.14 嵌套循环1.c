#include <stdio.h>
#define ROWS 6
#define CHARS 10

int main()
{
	int row;
	char ch;
	
	for (row = 0;row < ROWS; row++)
	{
		for (ch = 'A'; ch < ('A' + CHARS); ch++)	//'A' + CHARSҲ�����ַ�'K'��ASCII�� 
			printf("%c", ch);		//ע����������!���������ڲ�forѭ������� 
		printf("\n");				//ע����������!�����������forѭ������� 
	}
	return 0;
}	
	/*Ƕ��ѭ����ִ��˳���ǣ�									for (   ;   ;  ) 	//����1 
	1.�����ⲿѭ��												{
	2.ִ��ѭ���ڵ��ڲ�ѭ��֮ǰ����� 								statements          //����2 
	3.�����ڲ�ѭ��													for (   ;   ;  )	//����3 
	4.ִ���ڲ�ѭ�����						 						{
	5.�ڲ�ѭ��û������ص�����3����ִ֮���ⲿѭ����ʣ������	 		statements		//����4 
	6.�ⲿѭ��û������ص�����1����֮����ѭ��						}
																	statements		//����5 
																}
	*/

