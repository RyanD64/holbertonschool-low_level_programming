#include"main.h"

/**
  *clear_bit - set the value of a bit to 0
  *@n: random number
  *@index: random value
  *Return: 1 otherwise -1
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 32 || n == 0)
{
	return (-1);
}

if (index <= 32)
{
	*n &= ~(1UL << index);
}
return (1);
}
