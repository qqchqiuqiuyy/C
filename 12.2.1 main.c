#include <stdio.h>

double range(double [], size_t);	//求极差 
void input(double [], size_t);	//函数在该源文件找不到定义时，可在项目内别的源文件寻找函数定义 

int main(int argc, char *argv[]) {
	double nums[10];
	printf("输入10个数: ");
	input(nums, 10);
	printf("极差是: %f\n", range(nums, 10));
	return 0;
}

/*
	建立一个拥有多个源文件的项目：
	Dev-C++: 文件-新建-项目-Console Application(控制台应用程序)-选择C语言-修改项目名后提交
	点开左侧项目管理可以添加或删去源文件(或视图-浮动项目管理器) 
	
	代码写好，确保所有文件都保存后，才可进行联合编译 
*/ 
