#include <stdio.h>
#define SIZE 10

int main()
{
	int i, score[SIZE];		//������������� 
	int sum = 0;	//������ʼ��
	double average;
	
	printf("����%d�ſγ̵ĳɼ�: \n", SIZE);
	for (i = 0;i < SIZE;i++)
		scanf("%d",&score[i]);	//�����Ƕ�Ԫ��score[i]ȡ��ַ
	//���ѭ��ʹ�ÿ��Զ�ȡ10������ֵ����������һ��������10��������ʵ�����൱�ڣ�
	// scanf("%d%d%d%d%d%d%d%d%d%d",&score[0],&score[1],&score[2],&score[3],&score[4],&score[5],&score[6],&score[7],&score[8],&score[9]); 
	//ʹ��ѭ���ر���������������Ԫ�� 
	printf("��Щ����������ĳɼ�ֵ:\n");
	for (i = 0;i < SIZE;i++)
		printf("%5d",score[i]);
	//ʹ��ѭ���ر��������������Ԫ��
	printf("\n");
	//����������Ҫ���ǻ��� 
	for (i = 0;i < SIZE;i++)
		sum += score[i];
	//ͬ��ʹ��ѭ����ÿ��Ԫ�ص�ֵ�Ӹ�sum
	average = (double) sum / SIZE;	//ע��sum��intֵ��Ҫǿ��ת����double��
	printf("�ܳɼ�Ϊ%d, ƽ����Ϊ%.2lf\n",sum,average);
	
	return 0; 
}

/* ���������ķ�����
	type ������[������Ԫ�صĸ���]; 
	���磺
	int nums[10];	//������һ��int���飬��������10������ 
	char str[10];	//������һ��char���飬��������10���ַ�(�����һ������Ԥ����'\0')
	
	��������Ԫ�صķ����� 
	���е�����Ԫ�ض���ͨ�������������λ�õģ���һ���Ǵ�������0��ʼ(��ʾ��һ��Ԫ��)
	nums[0] 	   //��һ��Ԫ��
	nums[4] = 5;   //�Ե����Ԫ�ظ�ֵ 
	&nums[5]       //�Ե�����Ԫ��ȡ��ַ 
	nums[10]	   //��!numsֻ��10��Ԫ�أ������ﳢ�Է��ʵ�11��Ԫ�� 
	 


*/ 
