#include "main.h"

/**
 * *_strchr - locate a character in a string
    * @s: random value
    * @c: random value
     * Return: NULL otherwise 0.
      */
char *_strchr(char *s, char c)
{
do {
	if (*s == c)
	{
	return (s);
	}
} while (s++);
return (NULL);
}
