#include"main.h"

/**
  * factorial - return the factorial of a given number
  * @n: random number
  * Return: !n otherwise -1 or 1
  */

int factorial(int n)
{

if (n < 1)
{
	if (n < 0)
	{
	return (-1);
	}
	else
	{
	return (1);
	}
}
return (n * factorial(n - 1));
}
