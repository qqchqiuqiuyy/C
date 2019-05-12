#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER 256

char temp[BUFFER];	//临时保存字符串 

struct name {
	char * fname;
	char * lname;
	int letters;
};

void getinfo(struct name *);	//读入姓名信息并分配内存 
void showinfo(const struct name *);	//输出信息
void cleanup(struct name *);	//释放内存

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
	p->fname = (char *)malloc(sizeof (char) * (strlen(temp) + 1));	//加1是为了存放空字符，这样保证刚好容纳这个字符串
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


