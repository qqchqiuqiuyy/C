#include <stdio.h>

int main()
{
	float f1 = 32000.0;
	double f2 = 2.14e+9; 	//还可以写成2.14e+009 或者 2.14e9
	double f3 = 2.33e-5;	//还可以写成2.33e-005
	 
	printf("%f can be written %e\n",f1,f1); 	//%f表示浮点数以带小数形式输出 
	printf("%f can be written %e\n",f2,f2);		//%e表示浮点数以科学计数法形式输出 
	printf("%f can be written %e\n",f3,f3); 
	
	double c = 1.234567;
	printf("%.4f\n",c);	//四舍五入法输出4位小数
	return 0; 
}
