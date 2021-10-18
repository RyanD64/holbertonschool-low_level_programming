#include"main.h"

/**
 * _memset - fills memory until a certain point with a constant byte
 * @s: random value
 * @n: random value
 * @b: random value
 * Return: s otherwise 0
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
