#include <stdio.h>

int main()
{
	int years = 10, i = 0;
	double money = 10000.0;
	const double Interests = 0.08; 	//������8%
	while (i++ < years)
		money *= 1 + Interests;		//�൱��money = money * (1 + Interests);
	printf("After 10 years,I have %lf yuan.", money);
	return 0;  
}
