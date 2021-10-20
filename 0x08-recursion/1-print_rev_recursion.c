#include"main.h"

/**
  * _print_rev_recursion - print a string in reverse
  * @s: random number
  */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
	{
	return;
	printf("\n");
}
	_print_rev_recursion(s + 1);
	printf("%c", *s);
}

