#include "main.h"

/**
 * main - print putchar
 * Return: 0 otherwise 1
 */

int main(void)
{
	int i = 0;
char letter[8] = "_putchar";

while (letter[i] != 0)
{
_putchar(letter[i]);
i++;
}
_putchar('\n');
return (0);

}
