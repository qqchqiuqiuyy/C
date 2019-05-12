#include <stdio.h>
#include <ctype.h>

int main()
{
	char ch;
	printf("练习题: 有如下声明:\ndouble nums[10];\n\n");
	printf("请问下面哪个对该数组正确地使用了scanf()?\n");
	printf("A.scanf(\"%%lf\",nums[2]);\t\tB.scanf(\"%%lf\",&nums[2]);\n");
	printf("C.scanf(\"%%lf\",&nums);\t\tD.scanf(\"%%lf\",nums + 2);\n\n");
	//不要忘了想输出"则需要使用转义序列字符'\"'，而输出百分号则需要使用%%
	ch = getchar(); 
	if (toupper(ch) >= 'A' && toupper(ch) <= 'D')	//如果ch属于a到d(通过toupper()转换成大写)或者是A到D 
	{
		if (toupper(ch) == 'B' || toupper(ch) == 'D')	//输入了答案B或D都判断正确
			printf("回答正确!\n");
		else
			printf("回答错误!你该好好复习了\n"); 
	}
	else
		printf("输入了非选项的字符!请重新运行作答。\n"); 
	return 0;
}

/*
	C语言的逻辑运算符用于组合表达式，获得更复杂的逻辑性
	运算符	意义   
	  &&    与(二元运算符)		 
	  ||    或(二元运算符) 
	  !     非(一元运算符) 
	  
	&&真值表
		expression1		expression2		&&
			false			false		false
			true			false		false
			false			true		false 
			true			true		true
			
	||真值表 
		expression1		expression2		&&
			false			false		false
			true			false		true
			false			true		true 
			true			true		true
			
	!真值表
		expression		!
			false		true
			true		false
			
	要表达90-100的范围，可以
	val >= 90 && val <= 100
	
	万不可这么表达：
	90 <= val <= 100
	相当于(90 <= val) <= 100
	不管真(1)假(0)都是比100小，整体表达式肯定是永真式。 
	
	
	要表达(-∞,90)∪(100,+∞)，可以
	val < 90 || val > 100
	
	要表达 x ≠ 0  ，可以(注意!比==高级) 
	!(val == 0) 
	
	这三个运算符的优先级是 !   >  &&   >   || 
	
	关于&&逻辑与运算符
	现有a = 3，对于表达式
	a > 5 &&  a < 8
	由于a > 5为false，整个表达式的结果肯定是false了，程序是不会去检测a < 8的，所以
	对于a > 5 && ++a < 8
	右边的++a是会被直接无视掉，不执行。		 
*/ 
