#include "main.h"

/**
 * _islower - print 1 if character is in lowercase
 *@c: random character
 *Return: (1) otherwise 0
 */

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
	return (1);
}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
		else
		{
			return (0);
		}
}
