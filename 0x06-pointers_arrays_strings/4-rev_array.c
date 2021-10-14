#include"main.h"

/**
 * reverse_array - print the array of string in reverse
 * @a: random nnumber
 * @n: random number
 */

void reverse_array(int *a, int n)
{
int i;
int tmp;
n = n - 1;
for (i = 0; i < n; i++, n--)
{
tmp = a[i];
a[i] = a[n];
a[n] = tmp;
}
}
