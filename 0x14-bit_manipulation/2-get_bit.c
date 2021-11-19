#include"main.h"

/**
  *get_bit - return the value of a byte at a given index
  *@n: random number
  *@index: random value
  *Return: getbyte otherwise -1
  */

int get_bit(unsigned long int n, unsigned int index)
{
int getbyte;

if (index > 32 || n == 0)
{
	return (-1);
}

if (index <= 32)
{
	getbyte = (n >> index) & 1;
}
return (getbyte);
}
