#include <stdio.h>

int main()
{
	int jane, tarzan = 3, cheeta = 4;
	
	cheeta = tarzan = jane = 68;
	printf("                  cheeta tarzan jane\n");
	printf("First round score %4d %6d %6d\n",cheeta,tarzan,jane);
	//%����d ��ʾ����(����)λ�ո�Ȼ�����Ҷ������ʽ�ڿո��������ֵ 
	//%����d ��ʾ����(����)λ�ո�Ȼ�����Ҷ������ʽ�ڿո��������ֵ
	
	 
	//��ֵlvalue�����Ա��޸ĵ�ֵ(�����)
	//��ֵrvalue�������Ա��޸ĵ�ֵ(�糣����)�����߲��ܶ���ȡ��ַ��ֵ(���ַ�����������ʽ)
	//�ڸ�ֵ�����(=)���������������������ֵ���Ҳ�������������ֵҲ��������ֵ
	/*	���ӣ� 
		 jane = 5;	  //jane����ֵ��5����ֵ(���ܶ�5ȡֵ) 
		 jane = tarzan + cheeta;  //��Ϊ������&(tarzan + cheeta)������������ֵ
		 jane = tarzen;		//tarzen����ֵ����Ҳ���Գ������Ҳ����� 
	*/ 
	
	return 0; 
}
