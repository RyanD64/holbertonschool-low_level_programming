#include"main.h"

/**
 * print_triangle - print a triangle with an n length
 * @size: random number
 */

void print_triangle(int size)
{
	int ligne = 0;
	int colonne = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ligne = 0  ; ligne < size ; ligne++)
		{
			for (colonne = 0 ; colonne < size ; colonne++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
