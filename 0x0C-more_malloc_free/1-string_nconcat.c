#include"main.h"
int _strlen(char *s);
char *_strdup(char *str);

/**
  *string_nconcat - concanate two strings
  * @s1: random value
  * @s2: random value
  * @n: random value
  * Return: fin otherwise NULL
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int c = 0, d = 0;
char *fin;

if (s1 == NULL && s2 == NULL)
{
	return (_strdup(s2));
}
	if (s2 == NULL && s1 == NULL)
	{
		return (_strdup(s1));
	}
	fin = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));

		if (!fin)
		{
			free(fin);
			return (NULL);
		}

			if (s1 != NULL && s2 != NULL)
			{
			while (s1[c])
			{
				fin[c] = s1[c];
				c++;
			}
				while (s2[d] && n)
				{
					fin[c + d] = s2[d];
					d++;
					n--;
				}
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
int e = 0;
while (s[e] != '\0')
e++;
return (e);
}

/**
  * *_strdup - dupmicate a string
  * @str: random value
  * Return: s otherwise 0
  */

char *_strdup(char *str)
{
	char *s = NULL;
	int f;

	if (str == NULL)
	{
		return (NULL);
	}
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
