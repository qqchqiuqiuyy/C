#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

struct account
{
	char userid[SIZE];
	char password[SIZE];
};

int main()
{
	int n, i;
	printf("�ж����˻���? ");
	scanf("%d", &n);
	struct account * users = (struct account *)malloc(sizeof (struct account) * n);
	for (i = 0;i < n;++i)
	{
		printf("�����˻�%d��ID: ", i + 1);
		scanf("%s", users[i].userid);
		printf("�����˻�%d������: ", i + 1);
		scanf("%s", users[i].password);
	}
	
	printf("�˻���                        ����\n");
	for (i = 0;i < n;++i)
		printf("%-30s%-30s\n", users[i].userid, users[i].password);
	free(users);
	return 0;
}


