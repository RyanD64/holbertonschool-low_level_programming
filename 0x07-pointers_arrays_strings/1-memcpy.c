#include"main.h"

/**
 * * _memcpy - copy n bytes from src to dest(both memory areas)
 * @dest: random value
 * @src: random value
 * @n: random value
 * Return: dest otherwise 1
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
