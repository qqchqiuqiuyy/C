#include <stdio.h>
#include <limits.h>
int main()
{
	short amy = SHRT_MAX;
	unsigned short jack = 0;
	printf("Amy has $%hd.\nNow I give her $1.\n",amy);
	amy = amy + 1;
	printf("Amy has $%hd right now.\nHow poor she is!\n\n",amy);
	
	printf("Jack has $%hu.\nNow I take him $1.\n",jack);
	jack = jack - 1;
	printf("Jack has $%hu right now.\nHow lucky he is!\n\n",jack);
	
	/*  要讨论整型的上溢、下溢出现的原因，就要了解计算机如何用二进制储存数据
		以8位整数为例，每一位可以是0或1，低位在右边，高位在左边，这样8位就可以储存256种不同的数
		例如 00000000   代表 十进制的0
			 01100011	代表 十进制的99	 
			 01111111   代表 十进制的127
		由于需要兼顾到储存负数，需要将最高位作为符号位，0为正，1为负
		那么 给 01111111 加上 1 会发生什么呢？
		首先肯定会变成10000000，那它代表多少呢？
		这个时候，补码的概念就需要出来了。计算机是使用补码来表示数据的。 
		补码的表示方法是： 正数的补码就是其本身；负数的补码是在正数补码的基础上取反后再加1
		而01111111的相反数就是10000001,即-127
		所以10000000代表的就是-128
		那么 给 11111111 加上 1  又会发生什么呢？  (11111111代表-1) 
		是100000000 吗？ 不是，因为该整数只占8位，则必须丢弃最高位的1，刚好剩下的就是0了
		
		正好[-128,127]其实就是一个首尾相接的环了。  
	*/ 
}
