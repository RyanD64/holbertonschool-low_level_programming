#include"main.h"

/**
 * swap_int - swap two values
 * @a : defined value
 * @b : defined value
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
