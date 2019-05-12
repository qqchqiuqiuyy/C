#include <stdio.h>
int main()
{
	float a,b;
	b = 2.0e20 + 1.0;
	a = b - 2.0e20;
	printf("%f \n", a);
	
	b = 1 / 3.0;
	printf("%.20f \n", b);
	
	 
	return 0;
}
