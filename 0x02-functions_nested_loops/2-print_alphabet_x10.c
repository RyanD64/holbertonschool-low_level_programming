#include "main.h"

/*
 *print_alphabet_x10 : print the alphabet ten times
 */

void print_alphabet_x10(void)
{
int letter = 'a';
int loop = 10;

while (loop < 10)
{
putchar ('\n');
loop++;

while (letter < 'z')
{
putchar (letter);
letter++;
}
}
}
