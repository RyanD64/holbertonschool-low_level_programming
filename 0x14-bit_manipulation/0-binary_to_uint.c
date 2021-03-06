#include"main.h"

/**
  *binary_to_uint - convert a binary number to an unsigned int
  *@b: random number
  *Return: val otherwise 0
  */

unsigned int binary_to_uint(const char *b)
{
unsigned int val = 0;
int i = 0;

if (b == NULL)
{
	return (0);
}

while (b[i] != '\0')
{
	val <<= 1;
	val += b[i] - '0';
	if (b[i] != '0' && b[i] != '1')
	{
		return (0);
	}
	i++;
}
return (val);
}
