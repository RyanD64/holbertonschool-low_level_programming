#include"main.h"

/**
 * print_square - print a diagonal with an n length
 * @size: random number
 */

void print_square(int size)
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
