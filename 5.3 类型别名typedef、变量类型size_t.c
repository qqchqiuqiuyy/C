#include <stdio.h>

int main()
{ 
	typedef long int_32;	//��int_32����Ϊlong�ı���	
	size_t size;	//����size_tʵ���Ͼ���unsigned long long
					//ʹ�øñ�������ͨ���������ĳ��Ȼ��С

	size = sizeof (int_32);
	int_32 a = 5;
	printf("sizeof int_32 = %d Bytes\n",size); 
	printf("sizeof size_t = %d Bytes\n",sizeof (size_t));  //���ﲻ�õ��Ľض�ʹ��ֵ�仯������,��Ϊ�������һ���С 
					 
	 
 } 
