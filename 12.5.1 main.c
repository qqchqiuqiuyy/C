#include <stdio.h>


//Ϊ���볣�õ����������������ͨ�������Ŀ���˽������ԭ�� 
extern int rand();		//extern����ʡ�� 
extern void srand(unsigned); 
int main(int argc, char* argv[]) {
	int i;
	//���Դ��е���srand()�����ı���������ӵ�ֵ�����糢��srand(1); Ȼ��srand(2); ... 
	for (i = 0;i < 5; ++i)
		printf("%hd\n", rand());
	return 0;
}

/*
	��seed�ĳ�ֵ�̶�ʱ����������������ɵ�ֵ˳��Ҳ�ǹ̶��ġ����������ж��ٴζ�һ���� 
	����������Ҫ����һ��srand()�������ı�seed�ĳ�ֵ��Ȼ��ʲôʹ��ʲô��������ʹ��ÿ������ʱseed�ĳ�ֵ��һ���أ��뿴�½� 
*/ 
