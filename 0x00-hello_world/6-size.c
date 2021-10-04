#include<stdio.h>
/**
 * main - print size of variables
 * Return: (0) otherwise 1
 */
int main(void)
{
char chartype;
int inttype;
long int longinttype;
long long int longlonginttype;
float floattype;

printf("Size of a char: %zu bytes\n", sizeof(chartype));
printf("Size of an int: %zu bytes\n", sizeof(inttype));
printf("Size of a long int: %zu bytes\n", sizeof(longinttype));
printf("Size of a long long int: %zu bytes\n", sizeof(longlonginttype));
printf("Size of a float: %zu bytes\n", sizeof(floattype));

return (0);
}
