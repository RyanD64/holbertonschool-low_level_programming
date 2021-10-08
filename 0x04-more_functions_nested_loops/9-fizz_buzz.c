#include<stdio.h>

/**
 * main - fizz buzz test
 */

int main(void)
{
int letter = 0;
int i = 1;

while (i <= 10)
	{
	while (letter <= 100)
		{
		if (letter / 10 == 0)
			{
			}
		else
			{
				if(letter % 3 == 0)
				{
				printf("Fizz");
				}
				else
					if(letter % 5 == 0)
					{
					printf("Buzz");
					}
					else
					{
						if(letter % 15 == 0)
						{
						printf("FizzBuzz");
						}
						else
						{
			putchar(letter / 10 + '0');
			}
			putchar(letter % 10 + '0');
			letter++;
		}
	putchar(' ');
	i++;
	letter = 0;
	}
}
}
}
