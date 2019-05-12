#include <stdio.h>

//这是main()函数的带参数形式，第一个参数为命令行中的字符串数
//第二个参数是字符串数组 
int main(int argc, char * argv[])
{
	int count;
	
	printf("The command line has %d arguments: \n", argc);
	for (count = 0; count < argc; count++)
		printf("%d: %s\n", count, argv[count]);
	puts("");
	
	return 0;
}


/*
	【注意】此代码仅讨论 在Windows命令行模式下运行 的情况
	 
	该main()函数的扩展形态使得您在命令行模式下输入的参数将保存在argv内 
	argv[0] 一般是该可执行文件所在的文件路径(不一定是绝对路径)
	从argv[1]起就是您在命令行模式下输入的参数字符串 
	
	如果仅在这里编译运行的话，您将只会看到1个参数，即该文件的绝对路径
	
	如何在Windows命令行模式下运行？
	①在此之前，请将编译出的可执行文件(.exe)放到任意盘根目录下(这里假定改到D盘)
	然后改名为test.exe
	②然后点开开始菜单，输入栏输入cmd后回车，打开cmd.exe
	③输入  D:[Enter]
	④输入test.exe即为运行该文件。
	
	不过我们尝试为其提供参数，这时我们输入： 
	test.exe repeat "I am hungry" now[Enter]
	此时，"repeat"  "I am hungry" "now"这三个参数字符串将传入字符串数组argv内 
	
	运行结果如下：
	The command line has 4 arguments:
	0: test.exe
	1: repeat
	2: I am hungry
	3: now
	
	默认情况下，提供的参数是用空格、换行符、制表符来分隔，但你可以以字符串形式提供使得
你带空格的字符串能传进argv内 
	    
	【输入/输出重定向】 
	有时候我们希望输入源不是键盘而是文件，又或者输出源不是控制台而是文件，就可以使用
命令行模式重定向输入或输出
	
	输出重定向符号 > (在cmd内使用)
	使用示例：
	①现在将 8.2 EOF(文件尾).exe 复制到D盘根目录，然后改名为test1.exe
	②打开cmd.exe
	③输入 D:[Enter]
	④输入test1.exe > matrix.txt[Enter]
	⑤此时将在D盘创建一个matrix.txt，然后现在我们已经在运行原先的7.2 EOF(文件尾).exe，
输入一段内容:
	4 3 5 2[Enter]
	1 8 7 6[Enter]
	2 5 6 4[Enter]
	3 9 4 2[Enter]
	[Ctrl]+[Z][Enter] 
	⑥程序执行结束，此时打开在D盘的matrix.txt，查看输出结果
	
	使用输出重定向可以改变输出的目标(默认stdout)
	
	
	输入重定向符号 < (在cmd内使用)
	使用示例：
	①现在将  9.21 在函数中使用二重指针(指向二维数组)作为参数.exe  复制到D盘根目录，
然后改名为test2.exe
	②打开cmd.exe
	③输入 D:[Enter]
	④输入test2.exe < matrix.txt[Enter]
	⑤我们已经打开了test2.exe，并且输入源改为文件。此时我们可以直接看到matrix.txt
内矩阵转置后的结果  
	
	同时使用输入/输出重定向符号
	示例： test2.exe < matrix.txt > result.txt[Enter]
	这样就会从matrix读入，并将输出内容给result.exe 
	
	详细的命令行参数请自己百度学习，或者在cmd.exe内输入help 或 help command
	ps.command是指help列表中的指令 
*/ 
