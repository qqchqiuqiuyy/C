#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch;
	printf("��ϰ��: ����������:\ndouble nums[10];\n\n");
	printf("���������ĸ��Ը�������ȷ��ʹ����scanf()?\n");
	printf("A.scanf(\"%%lf\",nums[2]);\t\tB.scanf(\"%%lf\",&nums[2]);\n");
	printf("C.scanf(\"%%lf\",&nums);\t\tD.scanf(\"%%lf\",nums + 2);\n\n");
	//��Ҫ���������"����Ҫʹ��ת�������ַ�'\"'��������ٷֺ�����Ҫʹ��%%
	ch = getchar(); 
	if (toupper(ch) >= 'A' && toupper(ch) <= 'D')	//���ch����a��d(ͨ��toupper()ת���ɴ�д)������A��D 
	{
		if (toupper(ch) == 'B' || toupper(ch) == 'D')	//�����˴�B��D���ж���ȷ
			printf("�ش���ȷ!\n");
		else
			printf("�ش����!��úúø�ϰ��\n"); 
	}
	else
		printf("�����˷�ѡ����ַ�!��������������\n"); 
	return 0;
}

/*
	C���Ե��߼������������ϱ��ʽ����ø����ӵ��߼���
	�����	����   
	  &&    ��(��Ԫ�����)		 
	  ||    ��(��Ԫ�����) 
	  !     ��(һԪ�����) 
	  
	&&��ֵ��
		expression1		expression2		&&
			false			false		false
			true			false		false
			false			true		false 
			true			true		true
			
	||��ֵ�� 
		expression1		expression2		&&
			false			false		false
			true			false		true
			false			true		true 
			true			true		true
			
	!��ֵ��
		expression		!
			false		true
			true		false
			
	Ҫ���90-100�ķ�Χ������
	val >= 90 && val <= 100
	
	�򲻿���ô��
	90 <= val <= 100
	�൱��(90 <= val) <= 100
	������(1)��(0)���Ǳ�100С��������ʽ�϶�������ʽ�� 
	
	
	Ҫ���(-��,90)��(100,+��)������
	val < 90 || val > 100
	
	Ҫ��� x �� 0  ������(ע��!��==�߼�) 
	!(val == 0) 
	
	����������������ȼ��� !   >  &&   >   || 
	
	����&&�߼��������
	����a = 3�����ڱ��ʽ
	a > 5 &&  a < 8
	����a > 5Ϊfalse���������ʽ�Ľ���϶���false�ˣ������ǲ���ȥ���a < 8�ģ�����
	����a > 5 && ++a < 8
	�ұߵ�++a�ǻᱻֱ�����ӵ�����ִ�С�		 
*/ 
