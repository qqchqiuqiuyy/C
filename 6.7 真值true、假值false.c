#include <stdio.h>

int main()
{
	int true_val = (10 > 2);		//һ����ԣ����ʽ���Ϊ�棬������ֵΪ1  
	int false_val = (10 < 2);		//��������ʽΪ�٣�����ֵΪ0
	/*
		while(1)
		{
			statements;		//ͨ������ѭ��������ʽѭ��(��ѭ��) 
		}
		
		while(0)
		{
			statements;		//ѭ������佫��Զ����ִ��
		}
	
	*/ 
	int n = 3;
	printf("...\n");
	while (n)
		printf("ֵ%d��true\n",n--);
	printf("ֵ%d��false\n\n",n);
	
	
	n = -3;
	printf("...\n");
	while (n)
		printf("ֵ%d��true\n",n++); 
	//C���Թ涨�κη�����(x��0 | x��R) ������ֵtrue��0�Ǽ�ֵfalse	
	return 0;
} 
