#include"main.h"
#include<stdlib.h>

/**
  * *_strdup - print a copy of a string
  * @str: random value
  * Return: s otherwise NULL
  */

char *_strdup(char *str)
{
char *s = NULL;
int f;
s = malloc((sizeof(char)) * (_strlen(str) + 1));
if (s == NULL)
{
free(s);
return (NULL);
}
for (f = 0; str[f] != '\0'; f++)
s[f] = str[f];

return (s);
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
	return (c);
}
