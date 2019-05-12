/*
	虽然结构体内不能自己嵌套自己，但是可以存放结构体
本身的指针，因为指针的指向不一定是一个结构体，就不会
有无限嵌套的情况了。
	struct node {
		int val;
		struct node * next;
	}

	同时这也是链表等数据结构的基础 

*/
