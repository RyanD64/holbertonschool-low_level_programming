#include "main.h"

/**
  *print_last_digit - print the last digit of a number
  *@number: random number
  *Return: number
  */

int print_last_digit(int number)
{
number = number % 10;
if (number < 0)
{
	number = number * -1;
}
_putchar(number + '0');
return (number);
}
