#include <stdio.h>

int main()
{
	int n = 0;
	while (n++ < 3);		 
		printf("n is %d\n",n);
	printf("That's all this program does.\n");
	return 0;
	
	/*
		�����۾���ϸע���ˣ�while (n++ < 3)������;�ģ����ѭ���൱�ڣ�
		while (n++ < 3)
			;			//���ѭ��ʲô������
			printf("n is %d\n",n);	//��仰����ѭ����ִ�����! 
	*/ 
}
