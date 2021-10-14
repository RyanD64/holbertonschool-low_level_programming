#include"main.h"
#include <stdio.h>

/**
 * _strlen - print the length of a string
 * @dest: defined print
 * @c: random number
 * Return:c otherwise 0
 */

int _strlen(char *dest)
{
	int c = 0;

	while (dest[c] != '\0')
	{
		c++;
	}
	return (c);
}

/**
 * _strncat - print two strings at a chain
 * @dest: defined print
 * @src: defined print
 * Return: dest otherwise 0
 */

char *_strncat(char *dest, char *src, int n)
{            
int i;
int c = _strlen(dest);

for (i = 0 ; i < n && src[i] != '\0' ; i++)
{
dest[c + i] = src[i];
}
dest[c + i] = '\0';
return (dest);
}
