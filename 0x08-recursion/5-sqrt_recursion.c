#include"main.h"
int bis_sqrt_recursion(int n, int i);
/**
  * _sqrt_recursion - print square root of a number
  * bis_sqrt_recursion - calculate the square root of a number
  * @n: random number
  * Return: -1 otherwise square root
  */

int _sqrt_recursion(int n)
{
		if (n < 0)
		{
			return (-1);
		}
		else
		{
		return (bis_sqrt_recursion(n, 0));
		}
}
/**
  * bis_sqrt_recursion - calculate the square root of a number
  * @n: random number
  * @i: random number
  * Return: i otherwise -1
  */

int bis_sqrt_recursion(int n, int i)
{
	if (n < i * i)
	{
		return (-1);
	}
	if (n == i * i)
	{
		return (i);
	}
	return (bis_sqrt_recursion(n, i + 1));
}
