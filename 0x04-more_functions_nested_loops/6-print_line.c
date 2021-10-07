#include"main.h"

/**
 * print_line - print a line with an n length
 * @n: random number
 */

void print_line(int n)
{
int l = 0;
while (l < n)
{
if (l <= 0)
{
_putchar('\n');
}
else
{
_putchar('_');
l++;
}
}
}
