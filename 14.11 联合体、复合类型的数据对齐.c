#include <stdio.h>

union u {
	int i_32;
	short i_16[2];
	char i_8[6];
};


struct s {
	int i_32;
	char i_8;
};

struct ss {
	char i_8;
	struct s st;
	int i_32;
	char i_8_2[4];
};

int main()
{
	printf("sizeof (union u) = %d\n", sizeof (union u));
	printf("sizeof (struct s) = %d\n",sizeof (struct s));
	printf("sizeof (struct ss) = %d\n", sizeof (struct ss));
	return 0;
}

/*
	������unionҲ��һ�ָ������ͣ�������ṹ�岻ͬ���ǣ����ڲ������ı�����ָ��
ͬһƬ��ַ���������������ڴ�Ƚ�С�����߲�ȷ��Ҫ��ʲô���ͱ����������
	���������͵�����������ṹ�壺
	union u{
		int i_32;
		short i_16[2];
		char i_8[6];
	};	//����union u����һ������
	Ȼ�����������������
	u val;
	��ֵ
	val.i32 = 5;
	val.i_16[0] = 3;	//ע�⣡��Ḳ�ǵ�i32������
	
	
	���ṹ��Ĵ�С����4��������ʱ���������Ὣ���Զ�����Ϊ4����������С����Ϊ
��������4���ֽ�Ϊ��λ��������Ч����졣ͬ�����������ڴ���int��ʱ��Ҳ���ٶ���
��� 
	���磺
	struct s {
		int i_32;
		char i_8;
	}; 
	
	Ĭ�������struct s��5���ֽڣ��������ڱ����������ݶ�����Ϊ������չΪ8�ֽ�
	
	struct ss {
		char i_8;
		struct s st;
		int i_32;
	}; 
	Ĭ�������ss��10���ֽڣ�����struct s������Ϊ8�ֽڣ�1+8+4=13��
struct ss�ᱻ����Ϊ16�ֽڡ�
	��Ȼ˵����֮���˷���һ���ڴ棬�����������ڴ�ռ任ȡЧ�ʵ�˼��ֵ������ѧϰ 

						
*/
