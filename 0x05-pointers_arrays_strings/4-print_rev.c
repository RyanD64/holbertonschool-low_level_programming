#include"main.h"

/**
 * print_rev - print string in reverse
 * @s: random character
 */

void print_rev(char *s)
{
int len = 0;
int i;
len = _strlen(s);

for (i = len - 1; i >= 0; i--)
{
printf("%c", s[i]);
}
printf("\n");
}


/**
 * _strlen - print the length of a string
 * @s: random character
 * Return: c otherwise 0
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);

}
