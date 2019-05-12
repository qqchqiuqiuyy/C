#include <stdio.h>
#include <stdlib.h>

void insert(int arr[], int * size, size_t pos, int val)
{
	*size++;
	arr = realloc(arr, sizeof(int) * *size);
	int i;
	for (i = *size - 1;i > pos;i--)
		arr[i] = arr[i - 1];
	arr[i] = val;
}

int main()
{
	int size = 5;
	int * arr = (int *)malloc(sizeof (int) * size), i;
	for (i = 0;i < 5;++i)
		arr[i] = i + 1;
	printf("arr��ַ: %p\n", arr);
	for (i = 0;i < 5;++i)
		printf("%d ", arr[i]);
	puts("\n����Ԫ��3������3��");
	insert(arr, &size, 3, 3);
	
	printf("arr��ַ: %p\n", arr);
	for (i = 0;i < 6;++i)
		printf("%d ", arr[i]);
	return 0;
}

/*
	������������һ�����⣺����Ԫ�غ���������ݻ�����
	
	���˾�������ʱ����Ų�����ڸ����ҵ�ԭ���ˣ��ڴ�֮ǰ������ȳ���Ѱ�������Դ
	
	
	
	
	�ؼ��Ĵ�������ڵ�7�У� arr = realloc(arr, sizeof(int) * *size);
	arr���βΣ����Ըı��ʵ������insert()�ڵ�arr��������main()�ڵ�arr�����﷢�������ڴ��ַ���ӡ� 
	�������������һ��printf("%p\n", arr); �Ϳ���֪���� 
	 
	���������֣�
	�ٺ����з���ֵint *�������������ͱ����arr = insert(arr, &size, 3, 3); Ȼ��insert()��return arr; 
	�ں���������һ����Ϊ����ָ�룬Ȼ�����ڱ��*arr = realloc(arr, sizeof(int) * *size); 
*/
