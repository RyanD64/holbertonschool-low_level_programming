#include"main.h"

/**
 * print_line - print a line with an n length
 * @n: random number
 */

void print_line(int n)
{
	int l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0 ; l < n ; l++)
			_putchar('_');
		_putchar ('\n');
	}
}
