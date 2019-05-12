#include <stdio.h>

void bubble_sort(int arr[], size_t n, int(*cmp)(const int,const int));	//�����˱Ƚ��õĺ���ָ�룬�û������ɶ���
int up(const int,const int);
int down(const int,const int);

int main()
{
	int nums[10] = {2,5,8,1,4,6,7,9,10,3}, i;
	bubble_sort(nums, 10, up);
	printf("ð����������� \n");
	for (i = 0;i < 10;++i)
		printf("%3d", nums[i]);
	putchar('\n');
	
	bubble_sort(nums, 10, down);
	printf("ð��������� \n");
	for (i = 0;i < 10;++i)
		printf("%3d", nums[i]);
	return 0;
}

void bubble_sort(int arr[], size_t n, int(*cmp)(const int,const int))
{
	int i, j, tmp;
	for (i = 0; i < n - 1; ++i)
	{
		for (j = 0; j < n - 1; ++j)
		{
			if (cmp(arr[j], arr[j + 1]) > 0)
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int up(const int left,const int right)
{
	return left - right;		//��Ҫʹ��left > right����ʽ 
}

int down(const int left, const int right)
{
	return right - left;		//��Ҫʹ��right > left����ʽ 
}
