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
	else
		printf("没有数据输入!\n");
	
	return 0;
}

/*  else语句不能单独使用，必须与if搭配，同样else可以接语句或代码块 

	if (expression)
		statements
	else (expression)
		statements 
		
		
	if (a > 0)
		printf("%d",a);
		++i;			//这句话是独立语句，还使得else断开，编译器报错 
	else
		printf("%d",a);	
*/ 
