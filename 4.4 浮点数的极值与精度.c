#include <stdio.h>
#include <limits.h>	//��סctrl���������limits.h����������Բ鿴��ͷ�ļ�������
					//���������ļ�ֵ��Ҳ����ȥ��C���Ը��˽̡̳���2.1 ѧϰ 
#include <float.h>	//���������� 


int main()
{
	printf("Some number limits for this system: \n");
	printf("One Byte = %d bits.\n", CHAR_BIT);			//һ�ֽڶ���λ 
	printf("Largest float: %e\n",FLT_MAX);				//float�����ֵ 
	printf("Smallest float: %e\n",FLT_MIN);				//float����Сֵ 
	printf("Largest double: %le\n",DBL_MAX);			//double�����ֵ 
	printf("Smallest double: %le\n",DBL_MIN);			//double����Сֵ 
	printf("float precision = %d digits\n",FLT_DIG);	//float�͸�������֤��ЧС����λ�� 
	printf("double precision = %d digits\n",DBL_DIG);	//double�͸�������֤��ЧС����λ�� 
	return 0;
}
