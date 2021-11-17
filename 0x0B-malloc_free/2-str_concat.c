#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
  * *str_concat - concanate two strings
  * @s1: random value
  * @s2: random value
  * Return: fin otherwise NULL
  */

char *str_concat(char *s1, char *s2)
{
int c = 0, d = 0;
char *fin;

if (!s1 && !s2)
{
	return (NULL);
}

fin = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2)));

while (s1[c] && s1)
{
	fin[c] = s1[c];
	c++;
}

while (s2[d] && s2)
{
	fin[c + d] = s2[d];
	d++;
}
fin[c + d] = '\0';

return (fin);
}

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
	return (1 + _strlen(++s));
}
