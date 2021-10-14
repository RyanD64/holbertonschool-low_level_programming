#include"main.h"

/**
 * _strlen - print the length of a string
 * @s: random value
 * Return:c otherwise 0
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}

/**
 * _strncpy - copy a string
 * @dest : determined string
 * @src : determined string
 * @n: random number
 * Return: dest otherwise 0
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

for ( ; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
