#include <stdio.h>

int main()
{
	float f1 = 32000.0;
	double f2 = 2.14e+9; 	//������д��2.14e+009 ���� 2.14e9
	double f3 = 2.33e-5;	//������д��2.33e-005
	 
	printf("%f can be written %e\n",f1,f1); 	//%f��ʾ�������Դ�С����ʽ��� 
	printf("%f can be written %e\n",f2,f2);		//%e��ʾ�������Կ�ѧ��������ʽ��� 
	printf("%f can be written %e\n",f3,f3); 
	
	double c = 1.234567;
	printf("%.4f\n",c);	//�������뷨���4λС��
	return 0; 
}
