#include <stdio.h>

int main()
{
	const int Freezing = 0;
	double temperature;
	int cold_days = 0, total_days = 0;
	printf("输入这些天以来的摄氏温度，直到您键入q回车结束:\n");
	while (scanf("%lf",&temperature))
	{
		++total_days;
		if (temperature < Freezing)
			++cold_days;
	}
	
	if (total_days != 0)	
		printf("%d天中大概有%.1lf%%的天数是在零下的温度\n",
				total_days, 100.0 * cold_days / total_days);
		//在语句过长时应在合适的地方换行
	if (total_days == 0)
		printf("没有数据输入!\n");
	
	return 0;
}
/*
	if条件语句是只有当条件表达式满足的时候执行下面语句(或代码块)
	 
	if语句形式:
	if (expression)
		statement
		
	或者
	if (expression)
	{
		statements
	}
*/
