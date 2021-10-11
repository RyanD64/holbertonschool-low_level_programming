#include"main.h"
/**
 * _strlen - print the length of a string
 * @s: random value
 * Return: c otherwise 0
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
