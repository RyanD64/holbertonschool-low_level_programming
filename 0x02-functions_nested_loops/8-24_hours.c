#include "main.h"

/**
  * jack_bauer - prints every minute of the day of JacK Bauer
  *
  *
  */

void jack_bauer(void)
{
int h = 0;
int m = 0;

while (h < 24)
{
	while (m < 60)
	{
		putchar((h / 10) + '0');
		putchar((h % 10) + '0');
		putchar(58);
		putchar((m / 10) + '0');
		putchar((m % 10) + '0');
		putchar('\n');
		m++;
	}
	m = 0;
	h++;
}
}
