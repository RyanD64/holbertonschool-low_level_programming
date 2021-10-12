#include"main.h"

/**
 * puts_half - prints half the string
 * @ste : character string
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

void puts_half(char *ste)
{
	int put;
	int _strlen(char *s);
	int c;

	c = _strlen(ste);

	if (c % 2 == 1)
		{
			put = (c - 1) / 2;
		}
	else
		put = (c / 2);
	while (put <= c)
	{
		_putchar(ste[put]);
		put++;
	}
	_putchar('\n');
}
