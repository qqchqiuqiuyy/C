#include <stdio.h>

int * find(int arr[10], int target);	//传递参数时只能传递数组元素为10的int数组	
//通用数组版本原型：  int * find(int arr[], int n, int target);		//提供第二个参数作为指针arr指向的数组元素个数
 
int main()
{
	int nums[10] = {1,3,4,6,8,9,11,13,14,15}, i;
	for (i = 1;i <= 15;++i)
		if (find(nums, i))	//如果返回的是空指针(NULL)，则为假 
			printf("数组nums内存在元素%d\n", i);
		else
			printf("元素%d未找到\n", i);
		
	find(nums,6)[2] = 10;	//由于返回的是指针，可以对指针用数组法，这里[2]是在nums + 3的基础上再偏移2位(指向nums[5]) 
	*find(nums,13) = 12;	//由于返回的是指针，可以对指针解除索引，所以这里实际上是对nums[7]赋值 
	for (i = 0;i < 10;++i)
		printf("%3d", nums[i]);
			 
}

int * find(int arr[10], int target)		//若数组参数被const限定，返回的指针也应为const int *(常量指针)，但这样的话就不能被解引用后赋值 
{
	int i;
	for (i = 0;i < 10;++i)
		if (target == arr[i])
			return arr + i; 
			 
	
	return NULL;	//NULL定义在头文件stdio.h中，定义NULL的值为0，表示空指针, 
}
