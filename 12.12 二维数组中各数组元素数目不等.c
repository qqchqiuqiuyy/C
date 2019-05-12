#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("显示杨辉三角的前几行? ");
	int n, i, j;
	scanf("%d", &n);
	
	//此处打算声明一个杨辉三角类型的数组，即第i行有i个元素的形式 
	int ** nums = (int **)malloc(sizeof(int *) * n);
	for (i = 0; i < n; ++i)
		nums[i] = (int *)malloc(sizeof(int) * (i + 1));
	//--------------------------------------------------------- 

	for (i = 0; i < n; ++i)
		nums[i][0] = nums[i][i] = 1;

	for (i = 2; i < n; ++i)
		for (j = 1; j < i; ++j)
			nums[i][j] = nums[i - 1][j - 1] + nums[i - 1][j];

	for (i = 0; i < n; ++i)
	{
		for (j = 0; j <= i; ++j)
			printf("%d ", nums[i][j]);
		puts("");
	}
	//释放内存同理 
	for (i = 0; i < n; ++i)
		free(nums[i]);
	free(nums);

	return 0;
}
