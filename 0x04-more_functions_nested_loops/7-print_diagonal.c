#include"main.h"

/**
 * print_diagonal - print a diagonal with an n length
 * @n: random number
 */

void print_diagonal(int n)
{
	int l;
	int m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0 ; l < n ; l++)
		{
			m = l;
			while (m > 0)
			{
				_putchar(' ');
				m--;
			}
			_putchar('\\');
			_putchar ('\n');
		}
	}
}
