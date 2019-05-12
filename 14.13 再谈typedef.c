/*
	typedef可以创建一种类型的别名，让你能用这个别名去声明变量
	比如typedef int i32_t;
	i32_t就是int的别称
	然后有i32_t num = 5;
	num就是int的类型
	
	曾经的time_t和size_t实际上都是unsigned int或unsigned long的别称

	对于结构体typedef的话：
	typedef struct complex {
  	   float rea;
  	   float imag;
	}  COMPLEX;

	这样你就可以用COMPLEX来代替struct complex去声明结构体变量了

	使用typedef还可以给一些复杂类型使用别称，比如
	typedef int[3][3] matrix;
	typedef int *  int_pointer;
	在Windows编程里有这样的typedef const char * LPCTSTR;
	甚至可以把函数指针也typedef    
	typedef int(*)(const void *, const void *)  compare;

	当然我们很少会用到typedef，但是这里有很多预先定义好的typedef你需要知道
它本来是什么类型的，因为这些都是围绕基本类型、指针类型、复合类型来弄的

*/
