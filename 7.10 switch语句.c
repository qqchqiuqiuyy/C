#include <stdio.h>

//统计元音字母出现次数 
int main()
{
	char ch;
	int a, e, i, o, u;
	a = e = i = o = u = 0;
	
	printf("输入一句话，统计各元音字母出现的个数(回车结束):\n");
	while ((ch = getchar()) != '\n')
	{
		switch(ch)				//switch语句是分支，不是循环，在括号内提供一个参数，与下面的参数匹配走向不同的分支 
		{
			case 'a':			//注意：由于ch是char，case 'A' 表示情况'A'，不能写成case A，若ch为'a'则跳到该行 
			case 'A': ++a;		//跳到目标行代码后执行冒号后的语句，往下执行直到遇见break语句才会跳出switch结构 
					  break;	//所以你可以尝试删除上面五个break语句来运行看看是什么效果 
			case 'e':
			case 'E': ++e;		//通常case可以是数字，可以是字符，还可以是字符串 
					  break;
			case 'i':
			case 'I': ++i;
					  break;
			case 'o':
			case 'O': ++o;
					  break;
			case 'u':
			case 'U': ++u;
					  break;
			default:  break;
		}
	} 
	printf("统计到的元音字母数: A   E   I   O   U\n");
	printf("                    %-4d%-4d%-4d%-4d%-4d\n", a, e, i, o, u);
	return 0;
}
