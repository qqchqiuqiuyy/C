#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER 256

char temp[BUFFER];	//��ʱ�����ַ��� 

struct name {
	char * fname;
	char * lname;
	int letters;
};

void getinfo(struct name *);	//����������Ϣ�������ڴ� 
void showinfo(const struct name *);	//�����Ϣ
void cleanup(struct name *);	//�ͷ��ڴ�

int main()
{
	struct name person;
	getinfo(&person);
	showinfo(&person);
	cleanup(&person);
	return 0;
}

void getinfo(struct name * p)
{
	p->letters = 0; 
	
	printf("Enter your first name.\n");
	gets(temp);
	p->fname = (char *)malloc(sizeof (char) * (strlen(temp) + 1));	//��1��Ϊ�˴�ſ��ַ���������֤�պ���������ַ���
	strcpy(p->fname, temp);
	p->letters += strlen(p->fname);		 
	
	printf("Enter your second name.\n");
	gets(temp);
	p->lname = (char *)malloc(sizeof (char) * (strlen(temp) + 1)); 
	strcpy(p->lname, temp);
	p->letters += strlen(p->lname);
}

void showinfo(const struct name * p)
{
	printf("%s %s, your name contains %d letters.\n",
		p->fname, p->lname, p->letters);
}

void cleanup(struct name * p)
{
	free(p->fname);
	free(p->lname);
}


