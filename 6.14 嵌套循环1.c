#include <stdio.h>
#define ROWS 6
#define CHARS 10

int main()
{
	int row;
	char ch;
	
	for (row = 0;row < ROWS; row++)
	{
		for (ch = 'A'; ch < ('A' + CHARS); ch++)	//'A' + CHARS也就是字符'K'的ASCII码 
			printf("%c", ch);		//注意代码的缩进!这是属于内层for循环的语句 
		printf("\n");				//注意代码的缩进!这是属于外层for循环的语句 
	}
	return 0;
}	
	/*嵌套循环的执行顺序是：									for (   ;   ;  ) 	//步骤1 
	1.进入外部循环												{
	2.执行循环内的内部循环之前的语句 								statements          //步骤2 
	3.进入内部循环													for (   ;   ;  )	//步骤3 
	4.执行内部循环语句						 						{
	5.内部循环没结束则回到步骤3，反之执行外部循环内剩余的语句	 		statements		//步骤4 
	6.外部循环没结束则回到步骤1，反之跳出循环						}
																	statements		//步骤5 
																}
	*/

