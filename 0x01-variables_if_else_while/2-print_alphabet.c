#include<stdio.h>

/**
 * main - print alphabet
 * Return: 0 otherwise 1
 */
int main(void)
{
int letter = "a";

while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);

}
