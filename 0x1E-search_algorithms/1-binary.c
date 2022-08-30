#include "search_algos.h"

/**
 * binary_search -  searches for a value using the binary search algorithm
 * @array: array of integers
 * @size: size of the array
 * @value: value to search
 * Return: i otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = (size - 1), i;

	if (array == NULL || size == 0)
		return (-1);

	while (l <= r)
	{
	int m = ((l + r) / 2);
		printf("Searching in array: ");

		for (i = l; i <= r; i++)
		{
			if (i == r)
				printf("%d ", array[i]);
			else
				printf("%d, ", array[i]);
		}
		printf("\n");

		if (array[m] < value)
			l = (m + 1);
		else if (array[m] > value)
			r = (m - 1);
		else
			return (m);
	}
return (-1);
}
