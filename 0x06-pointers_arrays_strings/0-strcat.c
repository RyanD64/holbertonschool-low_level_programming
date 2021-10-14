#include"main.h"
#include <stdio.h>

/**
 * _strlen - print the length of a string
 * @dest: defined print
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
 * _strcat - print two strings at a chain
 * @dest: defined print
 * @src: defined print
 * Return: dest otherwise 0
 */

char *_strcat(char *dest, char *src)
{
int dest_len = _strlen(dest);
int i;

for (i = 0 ; src[i] != '\0' ; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';

return (dest);
}
