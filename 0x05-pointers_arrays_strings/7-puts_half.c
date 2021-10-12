#include"main.h"

/**
 * _strlen - print the length of a string
 * @s: random value
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

/**
* puts_half - print half a string
* @ste: string to print the half
*/
void puts_half(char *ste)
{
	int put;

	int _strlen(char *s);

	int c;

	c = _strlen(ste);
	if (c % 2 != 0)
	{
	put = (c - 1) / 2;
	c++;
	}
	else
	put = (c / 2);
	while (put < c)
	{
		_putchar(ste[put]);
		put++;
	}
	_putchar('\n');
}
