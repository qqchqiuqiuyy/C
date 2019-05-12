#include <stdio.h>
#include <malloc.h>
int main()
{
	int guess = 1;
	char ch;
	printf("脑海里想一个1到20的数，我会尝试猜\n");
	printf("你只需要输入小写y或n告诉我猜中了没\n");
	printf("嗯...这个数是1么?\n");
	while ((ch = getchar()) != 'y')
	{
		if (ch == 'n')
			printf("那么...这个数是%d么?\n", ++guess);
		else
			printf("请输入小写y或n，好么?\n");
		while (getchar() != '\n')	//两行等价于while (getchar() != '\n'); 
			continue;
	}
	printf("我就知道哈哈^_^\n"); 
	
	malloc();
	return 0; 
}

/*
	用ch去保存字符用于检验，如果读到非y或n字符，程序会提示输入正确的字符，
	然后清空缓冲区。
	清空缓冲区的是这句话：
		while (getchar() != '\n')
			continue; 
	
	只要没读到换行符，getchar()就会一直从缓冲区拿走一个字符
	
	这样，当你输入了asdfg后回车
	[a][s][d][f][g][\n]
	ch读到a，会提示你去输入合法字符，然后内部循环会清空缓冲区 
	 
*/ 
