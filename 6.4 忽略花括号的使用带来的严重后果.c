#include <stdio.h>

int main()
{
	int n = 0;
	while (n < 3)
		printf("n is %d\n",n);
		n++;						//实际上这并不属于循环所执行的语句，所以这是个死循环 
	printf("That's all this program does\n");
	return 0;
}
