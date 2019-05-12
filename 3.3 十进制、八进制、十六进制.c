#include <stdio.h>

int main()
{
	int x = 100;
	printf("dec = %d; oct = %o; hex = %x\n",x,x,x);
	//%d 显示10进制数；%o 显示8进制数；%x 显示16进制数 
	printf("dec = %d; oct = %#o; hex = %#x\n",x,x,x); 
	//加上#可以显示前缀0或0x 
	
	int y = 064, z = 0x64;	//064是八进制写法(前缀0)，0x64是十六进制写法(前缀0x) 
	printf("064 = %d; 0x64 = %d",y,z);
	
	return 0;
}

