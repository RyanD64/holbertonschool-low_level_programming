#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - print last digit
 * Return: always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int last_digit;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	printf("Last digit of %d is %d ", n, last_digit);
	if (last_digit > 5)
	{
	printf("and is greater than 5\n");
	}
	if (last_digit == 0)
	{
	printf("and is 0\n");
	}
	if (last_digit < 6 && n != 0)
	{
	printf("and is less than 6 and not 0\n");
	}
	return (0);
}
