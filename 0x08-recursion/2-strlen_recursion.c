#include"main.h"

/**
  * _strlen_recursion - prints the length of a string
  * @s: random value
  */

int _strlen_recursion(char *s)
{
if (*s != '\0')
{
s++;
return (_strlen_recursion(s) + 1);
}
else
return (0);
}
