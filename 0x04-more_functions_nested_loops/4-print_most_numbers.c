#include"main.h"

/**
 * print_most_numbers - print numbers from 0 to 9 except 2 and 4
 */

void print_most_numbers(void)
{
int letter = '0';
while (letter <= '9')
{
if (letter != '2' && letter != '4')
{
_putchar(letter);
}
letter++;
}
putchar('\n');
}
