#include <stdio.h>

int main()
{
	const char * strs[5] = { "This", " is", " a", " C", " Program"};	//声明了一个包含5个字符串的数组
	int i;
	for (i = 0;i < 5;++i)
		printf("%s", strs[i]);
	//要访问第二个字符串的第二个字符，可以这样： strs[1][1] (还有各种表达不赘述)
	const char * copy = strs[0];	//似乎复制了一个字符串给copy
	
	puts("");
	
	printf("%s, &copy = %p, copy = %p\n", copy, &copy, copy);
	printf("%s, &strs[0] = %p, strs[0] = %p\n", strs[0], &strs[0], strs[0]); 
	//观察输出结果可发现，实际上copy和strs[0]共享同一个字符串的地址，也就是说copy复制的只是
	//strs[0]的地址而不是字符串的内容，这种复制叫做浅复制
	
	 
	 
	return 0;
}
