#include"main.h"

/**
 * print_numbers - print numbers from 0 to 9
 */

void print_numbers(void)
{
int letter = '0';
while (letter <= '9')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
