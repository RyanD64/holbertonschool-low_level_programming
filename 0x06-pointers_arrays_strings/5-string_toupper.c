#include"main.h"

/**
 * *string_toupper - turns all minuscules into majuscules
 * @str: random string
 * Return: str otherwise 0
 */

char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
	if (str[i] <= 'z' && str[i] >= 'a')
	{
		str[i] = str[i] - 32;
	}
}
str[i] = '\0';
return (str);
}
