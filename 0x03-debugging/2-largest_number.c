#include "main.h"

/**
  * largest_number - returns the largest of 3 numbers
  * @a: random integer
  * @b: random integer
  * @c: random integer
  * Return: largest number otherwise 0
  */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		largest = a;
		if (a > c)
		{
			largest = a;
		}
	}
	else
	{
		largest = b;
		if (b > c)
		{
		largest = b;
		}
		else
		largest = c;
	}

	return (largest);
}
