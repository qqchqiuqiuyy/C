#include <stdio.h>

//ͳ��Ԫ����ĸ���ִ��� 
int main()
{
	char ch;
	int a, e, i, o, u;
	a = e = i = o = u = 0;
	
	printf("����һ�仰��ͳ�Ƹ�Ԫ����ĸ���ֵĸ���(�س�����):\n");
	while ((ch = getchar()) != '\n')
	{
		switch(ch)				//switch����Ƿ�֧������ѭ�������������ṩһ��������������Ĳ���ƥ������ͬ�ķ�֧ 
		{
			case 'a':			//ע�⣺����ch��char��case 'A' ��ʾ���'A'������д��case A����chΪ'a'���������� 
			case 'A': ++a;		//����Ŀ���д����ִ��ð�ź����䣬����ִ��ֱ������break���Ż�����switch�ṹ 
					  break;	//��������Գ���ɾ���������break��������п�����ʲôЧ�� 
			case 'e':
			case 'E': ++e;		//ͨ��case���������֣��������ַ������������ַ��� 
					  break;
			case 'i':
			case 'I': ++i;
					  break;
			case 'o':
			case 'O': ++o;
					  break;
			case 'u':
			case 'U': ++u;
					  break;
			default:  break;
		}
	} 
	printf("ͳ�Ƶ���Ԫ����ĸ��: A   E   I   O   U\n");
	printf("                    %-4d%-4d%-4d%-4d%-4d\n", a, e, i, o, u);
	return 0;
}
