#include <stdio.h>
#include <limits.h>
int main()
{
	char ch;	//char�ͱ������ڱ�ʾ�ַ������䱾����Ȼ��8λ����������Ҳ���Ե�һ������int 
	printf("Enter a character.\n");
	scanf("%c", &ch); 	//����char��������Ҫʹ�ø�ʽ��%c
	printf("The code for %c is %d.\n",ch,ch);	//��%c��ʽ���ch���ӡ���ַ�������%d��ʽ���ch���ӡ��ASCII��
	printf("Let's see what happen if we add 1 to the character.\n");
	ch = ch + 1;	 
	printf("It becomes %c and its ASCII code is %d.\n\n",ch,ch);
	printf("The size of char: %d\n",sizeof ch);	//���char�����ֽڴ�С 
	printf("The range of char: [%d,%d]\n",CHAR_MIN,CHAR_MAX);	//���char����ȡֵ��Χ
	
	//char�����ĸ�ֵ 
	//char ch;   
	//ch = 'T';		//vaild,�ַ����ɵ�������ס��
	//ch = T;		//invalid,T��һ������(����T��char)
	//ch = "T";		//invalid,"T"��һ���ַ���
	//ch = 65;		//valid,���ⲻ��һ�ֺõı�̷��  	
	return 0; 
}
