#include"variadic_functions.h"

/**
  * print_strings - print strings
  * @n: random number of strings
  * @separator: string printed between numbers
  *
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *print;

va_start(ap, n);

for (i = 0; i < n; i++)
{
print = va_arg(ap, char*);
if (print == NULL)
{
	printf("(nil)");
}
else
{
printf("%s", print);
}

if (separator != NULL && i + 1 != n)
{
	printf("%s", separator);
}
}
va_end(ap);
printf("\n");
}
