#include <stdio.h>

/**
  * main - print the name of the file before compilation
  * Return: 0 otherwise 1
  * @argc: random character
  * @argv: random charcater
  */
int main(int argc, char *argv[])
{
	(void) argc;
	(void) argv;
	printf("%s\n", __FILE__);
	return (0);
}
