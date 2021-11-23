#include "main.h"

/**
  *print_sign - print the sign of a number
  *@n: random number
  *Return: 1 otherwise 0 or -1
  */

int print_sign(int n)
{

if (n > 0)
{
	_putchar(43);
	return (1);
}

if (n == 0)
{
	_putchar(48);
	return (0);
}

else
{
	_putchar(45);
	return (-1);
}
}
