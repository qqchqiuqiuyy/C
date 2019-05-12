#include <stdio.h>

int main()
{
	const int lucky_number = 6;
	int guess;
	
	do		//先执行循环内语句，再进行条件表达式检测是否为真(真则循环，假则退出循环) 
	{
		printf("猜猜我的幸运数字是多少? ");
		scanf("%d", &guess);
	} while (guess != lucky_number);	//这里条件满足的话可是会继续循环的哦，还有不要漏了分号 
	printf("恭喜你猜中了!\n");
	return 0; 
}

/*  do while语句形式如下： 
	do
		statement
	whlie (expression);
	
	或
	do
	{
		statements
	}
	while (expression);
	
	千万千万不能忘记括号后面的分号!
	
	do while循环与for循环、whlie循环的区别在于先执行循环体，再检测条件 
*/ 
