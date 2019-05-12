static unsigned seed = 1;	//随机数初始种子

unsigned rand(void)
{
	/* 产生伪随机数的谜之公式 */
	seed = seed * 1103515245 + 12345;	//后两个数要尽可能无关，这样使得seed的值更加随机
	return (unsigned) (seed / 65536) % 32768;	//它将返回0 - 32767的数 
}

void srand(unsigned _seed)
{
	seed = _seed;	//改变随机数种子的值 
} 

//随机数产生的重要因素是：初始种子值、与seed相乘的值和相加的值要尽可能不相关 
