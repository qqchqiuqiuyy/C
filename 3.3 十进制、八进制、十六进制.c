#include <stdio.h>

int main()
{
	int x = 100;
	printf("dec = %d; oct = %o; hex = %x\n",x,x,x);
	//%d ��ʾ10��������%o ��ʾ8��������%x ��ʾ16������ 
	printf("dec = %d; oct = %#o; hex = %#x\n",x,x,x); 
	//����#������ʾǰ׺0��0x 
	
	int y = 064, z = 0x64;	//064�ǰ˽���д��(ǰ׺0)��0x64��ʮ������д��(ǰ׺0x) 
	printf("064 = %d; 0x64 = %d",y,z);
	
	return 0;
}

