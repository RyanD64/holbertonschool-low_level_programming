#include"main.h"
int prime_number(int n, int i);

/**
  * is_prime_number - tells if the number is a prime one or not
  * @n: random number
  * Return: 0 otherwise 1
  */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_number(n, 2));
}
/**
  * prime_number - differencie a prime number from a composite one
  * @i: random number
  * @n: random number
  * Return: 1 otherwise 0
  */


int prime_number(int n, int i)
{

	if (i <= n)
	{
		if (n % i == 0 && i != n)
		{
			return (0);
		}
		else
		{
			if (i * i > n)
			{
				return (1);
			}
			else
			{
				return (prime_number(n, i + 1));
			}
		}
	}
	return (0);
}
