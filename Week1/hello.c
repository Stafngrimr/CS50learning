#include <stdio.h>
#include <string.h>
#include <strings.h>

int main(void)
{
	char name[10];

	printf("What's your name?: ");

	do
	{
		scanf("%10s", name);
		int i;
		for (i = 0; name[i] != "\0"; i++);
	}
	while (i < 3 || i > 10);



	printf("Hello %s!\n", name);
}
