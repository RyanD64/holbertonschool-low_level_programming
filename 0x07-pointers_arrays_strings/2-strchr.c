#include "main.h"

/**
   * *_strchr - locate a character in a string
    * @s: random value
    * @c: random value
     * Return: NULL otherwise 0.
      */
char *_strchr(char *s, char c)
{

while (*s != '\0')
{
	if (*s == c)
	{
	return (s);
	}
s++;
}
return (NULL);
}
