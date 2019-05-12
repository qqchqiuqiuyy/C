#include <stdio.h>

int main()
{
	char str1[] = "apple";	//对于数组名，不能对其使用自递增
	char * str2 = "apple";	//但对于指针，可以使用自递增
	printf("&str1 = %p, &str2 = %p\n", str1, str2);	
	str1[3] = 'L';	//可以，str1是数组
	//str2[3] = 'L';	//不可以！你的编译器可能会允许上面的情况，但按照当前的C标准，编译器不应该允许这么做。这种语句可能会导致内存访问错误。
						//原因在于编译器可能选择内存中的同一个单个的拷贝，来表示所有相同的字符串文字。例如，下面的语句都指向字符串"Klingon" 
						//的同一个单独的内存位置。
						//char * p1 = "klingon";
						//p1[0] = 'F';
						//printf("Klingon");
						//printf("%s", "Klingon");
						//如果你用一个char[]承接这个字符串，则将拥有这个字符串的拷贝，所以不会有问题 
			 
	return 0; 
}
