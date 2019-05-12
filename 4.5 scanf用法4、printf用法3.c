#include <stdio.h>

int main()
{
	//�������Ĵ��� 
	printf("Here's one way to print a ");
	printf("long string.\n");		//����a����Ŀո������� 
	printf("Here's another way to print a"	
			"long string.\n");		//�����ṩ�����ַ���(��֤һ���������ַ�����һ��)
	/*
	 	printf("Here's one way
		to print a long string");	//��ô���ǲ��Ϸ��� 
	*/
	int cm = 100;
	int p_size = printf("%dcm = %dm",cm,cm / 100);		//printf()�ķ���ֵ����������ַ��� 
	printf("\nThe printf() function printed %d characters.\n\n",p_size);	
	
	printf("*%10d*\n",cm);
	printf("*%-10d*\n",cm);
	printf("*%2d*\n\n",cm);
	
	double num = 1.23456;
	printf("*%10.2lf*\n",num);
	printf("*%-10.4lf*\n",num);
	printf("*%3.4lf*\n\n",num);
	
	char str[13] = "Hello World!";
	printf("*%20s*\n",str);
	printf("*%20.5s*\n",str);
	printf("*%-20.5s*\n\n",str);
	
	int a,b,c,d,e,f;
	printf("Enter the nums<q to quit>:" );
	int success_input = scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	printf("You have successfully entered %d nums.\n\n",success_input);
	
	return 0;
}

/*���ø�ʽ��

	%c	һ���ַ�
	%d	�з���ʮ��������
	%e	����������ѧ������
	%f	��������ʮ���Ƽ�����
	%i	�з���ʮ��������
	%o	�޷��Ű˽�������
	%p	ָ���ַ 
	%s	�ַ���
	%u	�޷���ʮ��������
	%x	�޷���ʮ����������
	%%	��ӡ%
*/

/*��ʽ������
	.digit(s)	��С����digit(s)λС������ʽ�������%.2f (��λС��������)
				�����ַ���ʱ����������ַ���ǰ���ٸ��ַ� 
	h			һ������%d��%u����ʾһ��short��unsigned short������ֵ�� ��%hd %hu
	l			һ������%d��%u��%e��%f����ʾ(unsigned) long��double�� ��%ld %lu %le %lf
	ll			һ������%d��%u����ʾ(unsigned) long longe�� ��%lld %llu
	L 			һ������%e��%f����ʾlong double�� ��%Lf %Le
	digit(s)	��.digit(s)ǰ���Σ���ʾռ�ö��ٸ�λ�ã�������(��)���룺 ��%4d %5.2f
				��������������ռ��λ�ñ�digit(s)������һ�㷽ʽ��� 
	+			��digit(s)ǰ���Σ���ʾ�Ҷ��룺	��%+4d %+5.2f
	-			��digit(s)ǰ���Σ���ʾ����룺  ��%-4d %-5.2f
	#			һ������%o��%x������ǰ׺0��0x��	��%#o  %#x
	*��.*		��ָ��digit(s)��.digit(s)��Ҫ�ں����ṩ��������������: printf("%*.*f",take_place,precision,float_num);
																						ռλ��     ����      ������
				 
*/ 

/*
	scanf()������ԭ��
		scanf()���û���������Ȼ������ո񡢻��з����Ʊ����Ȼ���������ݺ�ʼ���룬Ȼ���������ո񡢻��з����Ʊ������
		���磺scanf("%s%f",a,b);
		����ʱ�����룺    abcd123      4.56[Enter]
		��ʱscanf������ǰ���һЩ�ո��������ţ���ʼд�룬ֱ������3����Ŀո�ֹͣ��a���룻
		Ȼ���������м��һЩ�ո� ����4��ʼд�룬ֱ������6����Ļ��з�ֹͣ��b����
		 

    scanf()�ķ���ֵ
	    scanf()���سɹ��������Ŀ�����������û�ж�ȡ�κ���Ŀ(��������һ�����ֶ���ȴ������һ���������ַ���ʱ�ͻᷢ���������)��
	scanf()�᷵��0.������⵽"�ļ���β"(end of file)ʱ����������EOF(EOF�����ļ�stdio.h�ж��������ֵ��
		#define EOF -1
   
  
   scanf()�ַ�����ʽ�������ƥ�� �ɻؿ�1.6
	scanf("%d,%d",&a,&b);
	����������ô���룺
		12, 23
		12,23
		12 , 23
	�����������ô����
		12  23
	����scanfû����Сд���ţ���Ҳ����������ṩ��23������b�ĸ�ֵʧ��

	scanf()��ʽ��ʹ��*
	scanf("%*d%*d%d%d, &a, &b);
	��������ǰ���������Ķ�ȡ�����ú�����������ֵ�ֱ𸳸�a��b 

*/ 

/* printf()�ķ���ֵ
	�������ͬʱ��printf()��ͳ�Ʋ�����������ַ�����(������\0)
*/ 
