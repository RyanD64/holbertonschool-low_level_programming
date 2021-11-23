#include "main.h"
/**
* print_alphabet_x10 - print the alphabet ten times
*/

void print_alphabet_x10(void)
{
int letter = 'a';
int loop;

for (loop = 0; loop < 10; loop++)
{
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar (letter);
	}
_putchar ('\n');
}
}
