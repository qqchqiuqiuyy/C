#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("��ʾ������ǵ�ǰ����? ");
	int n, i, j;
	scanf("%d", &n);
	
	//�˴���������һ������������͵����飬����i����i��Ԫ�ص���ʽ 
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
	//�ͷ��ڴ�ͬ�� 
	for (i = 0; i < n; ++i)
		free(nums[i]);
	free(nums);

	return 0;
}
