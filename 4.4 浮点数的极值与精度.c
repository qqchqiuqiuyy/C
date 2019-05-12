#include <stdio.h>
#include <limits.h>	//按住ctrl，鼠标移向limits.h并点击，可以查看该头文件的内容
					//关于整数的极值，也可以去《C语言个人教程》的2.1 学习 
#include <float.h>	//浮点数限制 


int main()
{
	printf("Some number limits for this system: \n");
	printf("One Byte = %d bits.\n", CHAR_BIT);			//一字节多少位 
	printf("Largest float: %e\n",FLT_MAX);				//float的最大值 
	printf("Smallest float: %e\n",FLT_MIN);				//float的最小值 
	printf("Largest double: %le\n",DBL_MAX);			//double的最大值 
	printf("Smallest double: %le\n",DBL_MIN);			//double的最小值 
	printf("float precision = %d digits\n",FLT_DIG);	//float型浮点数保证有效小数的位数 
	printf("double precision = %d digits\n",DBL_DIG);	//double型浮点数保证有效小数的位数 
	return 0;
}
