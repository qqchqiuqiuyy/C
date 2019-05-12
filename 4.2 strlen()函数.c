#include <stdio.h>
#include <string.h>  //可使用字符串处理的相关函数，如strlen()

#define PROMPT "What's your name?\n"	
#define PRAISE "What a super marvelous name!\n"

int main()
{
	char name[20];
	printf(PROMPT);
	scanf("%s",&name);
	printf("Hello, %s. %s",name,PRAISE);
	
	printf("Your name has %d letters.\n",strlen(name));	//strlen()函数统计字符串含有多少字符(不包括\0) 
	printf("My phrase of praise has %d letters and its size is %d Bytes.\n",strlen(PRAISE),sizeof PRAISE); 
} 

