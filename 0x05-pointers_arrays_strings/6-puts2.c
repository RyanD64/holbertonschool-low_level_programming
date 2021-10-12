#include"main.h"

/*
 *
 *
 */

void puts2(char *str)
{
int i;
for(i = 0; i < 9; i = i + 2)
{
putchar(str[i]);
}
putchar('\n');
}
