#include"main.h"

/**
  *set_bit - set the value of a bit to 1
  *@n: random number
  *@index: random value
  *Return: getbyte otherwise -1
  */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 32 || n == 0)
{
	return (-1);
}

if (index <= 32)
{
	*n |= (1UL << index);
}
return (1);
}
