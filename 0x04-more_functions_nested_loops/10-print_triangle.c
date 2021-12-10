#include"main.h"

/**
 * print_triangle - print a triangle with an n length
 * @size: random number
 */

void print_triangle(int size)
{
int ligne = 1;
int colonne;

if (size > 0)
{
	while (ligne <= size)
	{
		colonne = 1;
		while (colonne <= size - ligne)
		{
			_putchar(' ');
			colonne++;
		}
		while (colonne <= size)
		{
			_putchar('#');
			colonne++;
		}
		while (colonne <= size)
		{
			_putchar('#');
			colonne++;
		}
		_putchar('\n');
		ligne++;
	}
}
else
{
	_putchar('\n');
}
}
