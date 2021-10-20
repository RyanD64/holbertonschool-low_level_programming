#include"main.h"

/**
  * _puts_recursion - print a string
  * @s: random number
  */

void _puts_recursion(char *s)
{
if (*s == '\0')
	{
	printf("\n");
	return;
	}
printf("%c", *s);
_puts_recursion(s + 1);
}
