#include "main.h"

/**
  *print_number - print an integer
  *@n: random integer
  */

void print_number(int n)
{
unsigned int num;

if (n >= 0)
{
	num = n;
}
else
{
	_putchar('-');
	num = -n;
}

if (num / 10)
{
	print_number(num / 10);
}
_putchar((num % 10) + '0');
}
