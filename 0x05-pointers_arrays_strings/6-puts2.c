#include"main.h"

/**
 * puts2 - puts half of the characters of a string
 * @str: random number
 */

void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i = i++)
{
	if (i % 2 == 0)
	{
		putchar(str[i]);
	}
	else
		continue;
}
putchar('\n');
}
