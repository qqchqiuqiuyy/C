/*
	�˽ⳣ���Ŀ⺯���ĺ���ԭ��

	==================================================ͷ�ļ�stdio.h============================================================ 
	������              ����ԭ��									��ע 
	printf				int printf(const char* _Format, ...); 		�ṩһ����ʽ���ַ������������ڲ���ʽ��������˳��������Ӧ����
																	�����ʽ���ַ���������������ַ��� 
	scanf               int scanf(const char* _Format, ...);		�ṩһ����ʽ���ַ������������ڲ���ʽ��������˳��������Ӧ���� 
																	������or����������������سɹ�������ַ�����������EOF����-1
	getchar				int getchar();								������or���̶���һ���ַ������ظ��ַ�ASCII�룬����EOF����-1
	putchar             int putchar(int _Ch);						�ṩ�ַ�ASCII�벢��������ظ��ַ�ASCII�룬����EOF����-1
	
	====================================================ͷ�ļ�math.h=========================================================== 
	sqrt                double sqrt(double _X);						����x������ƽ����
	pow					double pow(double _X,double _Y);			����x��y�η�
	sin					double sin(double _X);						����x������(����x�ǻ�����) 
  	cos					double cos(double _X);						����x������(����x�ǻ�����) 
  	tan					double tan(double _X);						����x������(����x�ǻ�����)
  	sinh				double sinh(double _X);						����x��˫������
  	cosh				double cosh(double _X);						����x��˫������
  	tanh				double tanh(double _X);						����x��˫������
  	asin				double asin(double _X);						����x�ķ�����(����ֵ�ǻ�����)
  	acos				double acos(double _X);						����x�ķ�����(����ֵ�ǻ�����)
  	atan				double atan(double _X);						����x�ķ�����(����ֵ�ǻ�����)
  	atan2				double atan2(double _Y,double _X);			����y/x�ķ�����(����ֵ�ǻ�����) 
  	exp					double exp(double _X);						����e��x�η� 
  	log					double log(double _X);						������eΪ��x�Ķ���ֵ 
  	log2				double log2(double _X);						������2Ϊ��x�Ķ���ֵ 
	log10				double log10(double _X); 					������10λ��x�Ķ���ֵ
	abs					int abs(int _X); 							��������x�ľ���ֵ 
	fabs				double fabs(double _X); 					���㸡����x�ľ���ֵ
	fmod				double fmod(double _X,double _Y); 			���㸡����x % y��ֵ 
	ceil				double ceil(double _X);						����x����ȡ����������ֵ��double
	floor				double floor(double _X);					����x����ȡ����������ֵ��floor 
	
	===================================================ͷ�ļ�string.h==========================================================
	strlen				size_t strlen(const char *_Str);			�����ַ������ַ�����(������'\0')��ע�ⷵ��ֵ���޷�������
	strnlen				size_t strnlen(const char *_Str,			��ǰMaxCount���ַ�ͳ���ַ������ַ�����(������'\0')������ 
										size_t _MaxCount);			��ֹ�ַ���û����'\0'��β���³�����ʵ�Σ��(���ֵ����)	 
	===================================================ͷ�ļ�ctype.h===========================================================
	isalnum				int isalnum(int _C);						ASCII������ĸ�����ַ��ط�0����֮Ϊ0 
	isalpha				int isalpha(int _C);						ASCII������ĸ���ط�0����֮Ϊ0 
	isdigit				int isdigit(int _C);						ASCII�������ַ��ط�0����֮Ϊ0 
	islower				int islower(int _C);						ASCII����Сд��ĸ���ط�0����֮Ϊ0 
	ispunct				int ispunct(int _C);						ASCII���Ǳ����ŷ��ط�0����֮Ϊ0 
	isspace				int isspace(int _C);						ASCII���ǿո񷵻ط�0����֮Ϊ0 
	isupper				int isupper(int _C);						ASCII���Ǵ�д��ĸ���ط�0����֮Ϊ0 
	tolower				int tolower(int _C);						ASCII���Ǵ�д��ĸתΪСд��ĸ��ASCII�룬��֮���ı��� 
	toupper 			int toupper(int _C);						ASCII����Сд��ĸתΪ��д��ĸ��ASCII�룬��֮���ı���


*/ 


