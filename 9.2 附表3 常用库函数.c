/*
	了解常见的库函数的函数原型

	==================================================头文件stdio.h============================================================ 
	函数名              函数原型									备注 
	printf				int printf(const char* _Format, ...); 		提供一个格式化字符串，并根据内部格式符类型与顺序增加相应参数
																	输出格式化字符串并返回输出的字符数 
	scanf               int scanf(const char* _Format, ...);		提供一个格式化字符串，并根据内部格式符类型与顺序增加相应参数 
																	缓冲区or键盘输入变量并返回成功输入的字符个数，读到EOF返回-1
	getchar				int getchar();								缓冲区or键盘读入一个字符，返回该字符ASCII码，读到EOF返回-1
	putchar             int putchar(int _Ch);						提供字符ASCII码并输出，返回该字符ASCII码，读到EOF返回-1
	
	====================================================头文件math.h=========================================================== 
	sqrt                double sqrt(double _X);						计算x的算术平方根
	pow					double pow(double _X,double _Y);			计算x的y次方
	sin					double sin(double _X);						计算x的正弦(这里x是弧度制) 
  	cos					double cos(double _X);						计算x的余弦(这里x是弧度制) 
  	tan					double tan(double _X);						计算x的正切(这里x是弧度制)
  	sinh				double sinh(double _X);						计算x的双曲正弦
  	cosh				double cosh(double _X);						计算x的双曲余弦
  	tanh				double tanh(double _X);						计算x的双曲正切
  	asin				double asin(double _X);						计算x的反正弦(返回值是弧度制)
  	acos				double acos(double _X);						计算x的反余弦(返回值是弧度制)
  	atan				double atan(double _X);						计算x的反正切(返回值是弧度制)
  	atan2				double atan2(double _Y,double _X);			计算y/x的反正切(返回值是弧度制) 
  	exp					double exp(double _X);						计算e的x次方 
  	log					double log(double _X);						计算以e为底x的对数值 
  	log2				double log2(double _X);						计算以2为底x的对数值 
	log10				double log10(double _X); 					计算以10位底x的对数值
	abs					int abs(int _X); 							计算整数x的绝对值 
	fabs				double fabs(double _X); 					计算浮点数x的绝对值
	fmod				double fmod(double _X,double _Y); 			计算浮点数x % y的值 
	ceil				double ceil(double _X);						计算x的上取整，但返回值是double
	floor				double floor(double _X);					计算x的下取整，但返回值是floor 
	
	===================================================头文件string.h==========================================================
	strlen				size_t strlen(const char *_Str);			计算字符串内字符个数(不包括'\0')，注意返回值是无符号整型
	strnlen				size_t strnlen(const char *_Str,			在前MaxCount个字符统计字符串内字符个数(不包括'\0')，可以 
										size_t _MaxCount);			防止字符串没有以'\0'结尾导致超界访问的危险(结果值过大)	 
	===================================================头文件ctype.h===========================================================
	isalnum				int isalnum(int _C);						ASCII码是字母或数字返回非0，反之为0 
	isalpha				int isalpha(int _C);						ASCII码是字母返回非0，反之为0 
	isdigit				int isdigit(int _C);						ASCII码是数字返回非0，反之为0 
	islower				int islower(int _C);						ASCII码是小写字母返回非0，反之为0 
	ispunct				int ispunct(int _C);						ASCII码是标点符号返回非0，反之为0 
	isspace				int isspace(int _C);						ASCII码是空格返回非0，反之为0 
	isupper				int isupper(int _C);						ASCII码是大写字母返回非0，反之为0 
	tolower				int tolower(int _C);						ASCII码是大写字母转为小写字母的ASCII码，反之不改变结果 
	toupper 			int toupper(int _C);						ASCII码是小写字母转为大写字母的ASCII码，反之不改变结果


*/ 


