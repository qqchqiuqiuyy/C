#include <stdio.h>
#include <string.h>
enum COLOR {red, orange, yellow, green, blue, violet};

enum LEVEL {low = 100, medium = 500, high = 2000};

enum {LEN = 10};
const char * colors[] = {"red", "orange", "yellow", "green", "blue", "violet"};

int main()
{
	enum COLOR color;
	char choice[LEN];
	int flag = 0;	//标记颜色是否找到
	
	puts("输入一个颜色(空行结束): ");
	while (gets(choice) != NULL && choice[0] != '\0')
	{
		for (color = red; color <= violet; color++)
		{
			if (!strcmp(choice, colors[color]))
			{
				flag = 1;
				break;	
			}	
		}	 
		if (flag)
			switch(color)
			{
				case red   :puts("Rose are red.");
								break;
				case orange:puts("Poppies are orange.");
								break;
				case yellow:puts("Sunflowers are yellow.");
								break;
				case green :puts("Grass is green.");
								break;
				case blue  :puts("Bluebells are blue.");
								break;
				case violet:puts("Violets are violet.");
								break;
						
			}
			else
				printf("I don't know about the color %s.\n", choice);
		flag = 0;
		puts("Next color, please(empty line to quit):");
	}
	puts("Goodbye!");
	
	return 0;
}
