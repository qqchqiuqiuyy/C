#include <stdio.h>

int main()
{
	int n = 0;
	while (n++ < 3);		 
		printf("n is %d\n",n);
	printf("That's all this program does.\n");
	return 0;
	
	/*
		睁大眼睛仔细注意了！while (n++ < 3)后面有;的，这个循环相当于：
		while (n++ < 3)
			;			//这个循环什么都不做
			printf("n is %d\n",n);	//这句话不是循环的执行语句! 
	*/ 
}
