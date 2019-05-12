#include <stdio.h>
#include <limits.h>  //����ͷ�ļ��ڶ�����һЩ�������ڱ�������ֵ 
int main()
{
	int a = 4;
	printf("The size of a: %d\n\n", sizeof a);
	
	printf("The range of short: [%hd, %hd]\n",SHRT_MIN,SHRT_MAX);
	printf("The range of unsigned short: [0, %hu]\n",USHRT_MAX);
	printf("The size of short: %d Bytes = %d bits \n\n", sizeof (short), 8 * sizeof (short));
	
	printf("The range of int: [%d, %d]\n",INT_MIN,INT_MAX);
	printf("The range of unsigned int: [0, %u]\n", UINT_MAX);
	printf("The size of int: %d Bytes = %d bits \n\n",sizeof (int), 8 * sizeof (int));
	
	printf("The range of long: [%ld, %ld]\n", LONG_MIN, LONG_MAX);
	printf("The range of unsigned long: [0, %lu]\n", ULONG_MAX);
	printf("The size of long: %d Bytes = %d bits \n\n", sizeof (long), 8 * sizeof (long));
	
	printf("The range of long long: [%lld, %lld]\n", LLONG_MIN, LLONG_MAX);
	printf("The range of unsigned long long: [0, %llu]\n", ULLONG_MAX);
	printf("The size of long: %d Bytes = %d bits \n\n", sizeof (long long), 8 * sizeof (long long));
	
	printf("The size of char: %d Bytes = %d bits \n", sizeof (char), 8 * sizeof (char));
	printf("The size of float: %d Bytes = %d bits \n", sizeof (float), 8 * sizeof (float));
	printf("The size of double: %d Bytes = %d bits \n", sizeof (double), 8 * sizeof (double));
	printf("The size of long double: %d Bytes = %d bits", sizeof (long double), 8 * sizeof (long double));
	return 0;
	//��Щlimits.h�ĳ������Ų�ǿ��ǣ������ֱ��ctrl+�������2��limits.hֱ�Ӳ��� 
	/*��ʽ��������� �� �������Ͷ��ձ�
		%hd	short			%d  int						%ld	long			%lld 	long long
		%hu unsigned short	%u  unsigned int/unsigned	%lu	unsigned long	%llu	unsigned long long
							%f	float					%lf	double			%llf	long double
		%c	char			%s	char* / char[]					
	*/
	//���ͱ�����char, short, int, long, long long
	//�����ͱ�����float, double, long double 
	//ע�⣺̷��ǿʱ����short��8λ,int��16λ��long��32λ
	//���������ķ�Χ������д��  [-2^(����λ��-1), 2^(����λ��-1) - 1] 
	return 0;
}
