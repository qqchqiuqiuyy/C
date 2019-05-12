/*
	类型匿名结构体省略了结构体类型名，旨在创建一次性使用的结构体，因此
在定义了结构体的同时必须声明所需要的变量(这里声明的同时可以初始化)，否
则将无法再声明该类型的结构体变量，指针也需要在定义的同时声明。无法强制
转换成该类型结构体或指针因为不知道结构体名。 
	struct {
		int year;
		int month;
		int day;
	} birthday = {1983, 11, 12};
	
	 
*/
