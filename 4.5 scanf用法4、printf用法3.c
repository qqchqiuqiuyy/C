#include <stdio.h>

int main()
{
	//语句过长的处理 
	printf("Here's one way to print a ");
	printf("long string.\n");		//紧跟a后面的空格接着输出 
	printf("Here's another way to print a"	
			"long string.\n");		//连续提供两个字符串(保证一个完整的字符串在一行)
	/*
	 	printf("Here's one way
		to print a long string");	//这么做是不合法的 
	*/
	int cm = 100;
	int p_size = printf("%dcm = %dm",cm,cm / 100);		//printf()的返回值是它输出的字符数 
	printf("\nThe printf() function printed %d characters.\n\n",p_size);	
	
	printf("*%10d*\n",cm);
	printf("*%-10d*\n",cm);
	printf("*%2d*\n\n",cm);
	
	double num = 1.23456;
	printf("*%10.2lf*\n",num);
	printf("*%-10.4lf*\n",num);
	printf("*%3.4lf*\n\n",num);
	
	char str[13] = "Hello World!";
	printf("*%20s*\n",str);
	printf("*%20.5s*\n",str);
	printf("*%-20.5s*\n\n",str);
	
	int a,b,c,d,e,f;
	printf("Enter the nums<q to quit>:" );
	int success_input = scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	printf("You have successfully entered %d nums.\n\n",success_input);
	
	return 0;
}

/*常用格式符

	%c	一个字符
	%d	有符号十进制整数
	%e	浮点数，科学计数法
	%f	浮点数，十进制计数法
	%i	有符号十进制整数
	%o	无符号八进制整数
	%p	指针地址 
	%s	字符串
	%u	无符号十进制整数
	%x	无符号十六进制整数
	%%	打印%
*/

/*格式符修饰
	.digit(s)	该小数以digit(s)位小数的形式输出：如%.2f (两位小数浮点数)
				用在字符串时表明输出该字符串前多少个字符 
	h			一般修饰%d或%u，表示一个short或unsigned short类型数值： 如%hd %hu
	l			一般修饰%d或%u或%e或%f，表示(unsigned) long或double： 如%ld %lu %le %lf
	ll			一般修饰%d或%u，表示(unsigned) long longe： 如%lld %llu
	L 			一般修饰%e或%f，表示long double： 如%Lf %Le
	digit(s)	在.digit(s)前修饰，表示占用多少格位置，并且左(右)对齐： 如%4d %5.2f
				如果输出的内容所占的位置比digit(s)大，则以一般方式输出 
	+			在digit(s)前修饰，表示右对齐：	如%+4d %+5.2f
	-			在digit(s)前修饰，表示左对齐：  如%-4d %-5.2f
	#			一般修饰%o或%x，加上前缀0或0x：	如%#o  %#x
	*或.*		可指定digit(s)或.digit(s)，要在后面提供正整数参数，如: printf("%*.*f",take_place,precision,float_num);
																						占位数     精度      浮点数
				 
*/ 

/*
	scanf()的运作原理
		scanf()在用户输入后，首先会跳过空格、换行符、制表符，然后遇到数据后开始读入，然后再遇到空格、换行符、制表符结束
		比如：scanf("%s%f",a,b);
		运行时：输入：    abcd123      4.56[Enter]
		此时scanf跳过了前面的一些空格，来到负号，开始写入，直到遇到3后面的空格停止给a输入；
		然后再跳过中间的一些空格， 遇到4开始写入，直到遇到6后面的换行符停止给b输入
		 

    scanf()的返回值
	    scanf()返回成功读入的项目个数。如果它没有读取任何项目(当它期望一个数字而您却键入了一个非数字字符串时就会发生这种情况)，
	scanf()会返回0.当它检测到"文件结尾"(end of file)时，它将返回EOF(EOF是在文件stdio.h中定义的特殊值：
		#define EOF -1
   
  
   scanf()字符串格式与输入的匹配 可回看1.6
	scanf("%d,%d",&a,&b);
	则您可以这么输入：
		12, 23
		12,23
		12 , 23
	但是如果你这么输入
		12  23
	由于scanf没读到小写逗号，它也不会读到你提供的23，这样b的赋值失败

	scanf()格式符使用*
	scanf("%*d%*d%d%d, &a, &b);
	可以跳过前两个整数的读取而采用后两个整数的值分别赋给a和b 

*/ 

/* printf()的返回值
	在输出的同时，printf()会统计并返回输出的字符个数(不包括\0)
*/ 
