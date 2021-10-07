#include"main.h"

/**
 * more_numbers - print numbers from 0 to 14 ten times
 */

void more_numbers(void)
{
int letter = 0;
int i = 1;
while (i <= 10)
{	
while (letter <= 14)
{
if (letter / 10 == 0)
{
}
else
{
_putchar(letter / 10 + '0');
}
_putchar(letter % 10 + '0');
letter++;
}
_putchar('\n');
i++;
letter = 0;
}
}
