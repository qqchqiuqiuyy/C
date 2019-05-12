#include <stdio.h>

int main()
{
	char str[3][20];
	int yy, mm, dd, format;
	puts("输入今天的年月日，用空格隔开：");
	scanf("%d%d%d",&yy, &mm, &dd);
	sprintf(str[0], "日期: %d-%d-%d", yy, mm, dd);
	sprintf(str[1], "日期: %d/%d/%d", mm, dd, yy);
	sprintf(str[2], "日期: %d/%d/%d", dd, mm, yy);
	
	puts("选择要输出的格式类型: (1)年月日 (2)月日年 (3)日月年");
	while (scanf("%d", &format) == 0 || (format < 1 || format > 3))
		continue;
	puts(str[format - 1]);
	return 0;
}

/*	
	sprintf()函数在stdio.h！ 
	sprintf()函数在stdio.h！ 
	sprintf()函数在stdio.h！ 
	重要的事情说三遍！ 
	sprintf()函数的作用是将格式化输出的内容保存到字符数组中，方便取用 
	
	sprintf()函数的原型如下：
	int sprintf(char * _Dest,  const char * Format, ...);
	返回值是strlen(_Dest)
	第一个参数是要保存的位置(字符数组)
	第二个参数是格式化字符串
	后面的参数根据格式化字符串内格式符的类型和个数决定 
	例如：
	sprintf(str, "%.2f + %.2f = %.2f", f1, f2, f3); 
