#include <stdio.h>

int main()
{
	const char * strs[5] = { "This", " is", " a", " C", " Program"};	//������һ������5���ַ���������
	int i;
	for (i = 0;i < 5;++i)
		printf("%s", strs[i]);
	//Ҫ���ʵڶ����ַ����ĵڶ����ַ������������� strs[1][1] (���и��ֱ�ﲻ׸��)
	const char * copy = strs[0];	//�ƺ�������һ���ַ�����copy
	
	puts("");
	
	printf("%s, &copy = %p, copy = %p\n", copy, &copy, copy);
	printf("%s, &strs[0] = %p, strs[0] = %p\n", strs[0], &strs[0], strs[0]); 
	//�۲��������ɷ��֣�ʵ����copy��strs[0]����ͬһ���ַ����ĵ�ַ��Ҳ����˵copy���Ƶ�ֻ��
	//strs[0]�ĵ�ַ�������ַ��������ݣ����ָ��ƽ���ǳ����
	
	 
	 
	return 0;
}
