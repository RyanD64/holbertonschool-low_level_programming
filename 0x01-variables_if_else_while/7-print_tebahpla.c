#include<stdio.h>

/**
 * main - print reverse alphabet
 * Return: 0 otherwise 1
 */

int main(void)
{
int letter = 'z';

while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar('\n');
return (0);

}
