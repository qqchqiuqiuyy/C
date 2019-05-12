#include <stdio.h>
#define RED 0x1
#define GREEN 0x2
#define BLUE 0x4
#define YELLOW   RED | GREEN
#define PURPLE   RED | BLUE
#define CYAN    GREEN | BLUE 
#define WHITE    RED | GREEN | BLUE
#define ON  0x8
#define OFF 0x0

/*
	取一个字节的低4位作为开关
	0 0 0 0 0 0 0 0
	        | | | |
			| | | 红灯开关 0x1
			| | 绿灯开关   0x2
			| 蓝灯开关     0x4
			电源开关       0x8
	假设电源打开时，默认颜色设为白色，此时需要将所有开关打开，使用或运算符：
	LED = 0xF;	//即(LED) ^ (00001111) 
	即 LED = WHITE | ON; 
	
	若需要更改某个位上的开关状态时（如更改红灯开关)，使用异或运算符：
	LED = LED ^ 0x1;
	或LED ^= 0x1;
	
	若需要检测某个位是否为打开状态时，使用与运算符：
	LED & 0x1   表达式检测红灯开关是否打开
	LED & 0x8   表达式检测电源开关是否打开
	
	若需要打开某个开关时（如打开红灯），可以这样：
	LED = LED | 0x1;
	
	若需要关闭某个开关时（如关闭红灯），可以这样：
	LED = LED & ~0x1; 
	  

*/
int main()
{
	char LED = WHITE;
	const char * colors[8] = {"关闭", "红", "绿", "黄", "蓝", "紫", "青", "白"};	
	int pos, choice;
	while (1)
	{
		pos = LED & ON ? LED ^ ON : OFF; 
		printf("LED灯状态: %s\n", colors[pos]);
		printf("选择按钮:\n");
		printf("1)开关按钮\n2)红灯按钮\n3)绿灯按钮\n4)蓝灯按钮\n");
		while(scanf("%d", &choice) == 0 || choice < 1 || choice > 4)
			while (getchar() != '\n')
				continue;
		switch(choice)
		{
			case 1 : LED ^= ON;
					LED |= WHITE;
					break;
			case 2 : LED ^= RED;
					break;
			case 3 : LED ^= GREEN;
					break;
			case 4 : LED ^= BLUE;
					break;
		}
	}
	return 0; 
}

/*
	以下操作都是针对二进制数来操作，以signed char为例 
	
	
	按位取反 ~
	一元运算符~将二进制位中的每个1变为0，将每个0变为1
	~1 = 0   ~0 = 1
	
	~(10010110) = (01100101) 
	    -102         101

	注意特例：
	~(11111111) = (00000000)
	     -1           0
	如果这个数是-1，那么它的所有位都是1，该数取反结果为0
	可以用于将scanf("%d", &n) != EOF
	替换为    ~scanf("%d", &n)
	
	
	
	按位与(and) &
	二元运算符&接受两个操作数，只有两个操作数的对应位的值都为1时，产生的结果才为1.
	0 & 0 = 0   0 & 1 = 0
	1 & 0 = 0   1 & 1 = 1
	
	(10010011) & (00111101)
	
	列竖式运算
	   (10010011)
	 & (00111101)
	 ------------
	   (00010001)
	结果值为(00010001)
	
	按位或(or) |
	二元运算符|接受两个操作数，只要两个操作数的对应位的值有一个为1，产生的结果就为1
	0 | 0 = 0   0 | 1 = 1
	1 | 0 = 0   1 | 1 = 1
	
	(10010011) | (00111101)
	
	列竖式运算
	   (10010011)
	 | (00111101)
	 ------------
	   (10111111)
	结果值为(10111111)
	
	按位异或(xor) ^
	二元运算符^接受两个操作数，两个操作数的对应位的值一个为1，一个为0时，产生的结果才为1
	0 ^ 0 = 0   0 ^ 1 = 1
	1 ^ 0 = 1   1 ^ 1 = 0
	
	(10010011) ^ (00111101) 
	列竖式运算
	   (10010011)
	 ^ (00111101)
	 ------------
	   (10101110)
	结果值为(10101110)
	
	val = val & 15; 
	可简写成val &= 15;
	
	val = val ^ 15;
	可简写成val ^= 15;
	
	val = val | 15;
	可简写成val |= 15;    
	
*/
