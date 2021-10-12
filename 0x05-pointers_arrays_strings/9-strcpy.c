#include"main.h"

/**
 * _strcpy - copy array to dest
 * @dest: random number
 * @src: random number
 * Return: dest otherwise 0
 */

char *_strcpy(char *dest, char *src)
{
int i = src[0];

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
