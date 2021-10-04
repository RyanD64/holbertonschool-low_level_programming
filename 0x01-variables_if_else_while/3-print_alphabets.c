#include<stdio.h>
/**
 * main - prints alphABET
 * Return: 0 otherwise 1
 */
int main(void)
{
int letter = 'a', letters = 'A';

while (letter <= 'z')
{
putchar(letter);
letter++;
}
while (letters <= 'Z')
{
putchar(letters);
letters++;
}
putchar('\n');
return (0);
}
