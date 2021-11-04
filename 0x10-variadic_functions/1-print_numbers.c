#include"variadic_functions.h"

/**
  * print_numbers - print numbers
  * @n: random number of integers
  * @separator: string printed between numbers
  *
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
int print;

va_start(ap, n);

for (i = 0; i < n; i++)
{
print = va_arg(ap, int);
printf("%d", print);

if (separator != NULL && i + 1 != n)
{
	printf("%s", separator);
}
}
printf("\n");
}
