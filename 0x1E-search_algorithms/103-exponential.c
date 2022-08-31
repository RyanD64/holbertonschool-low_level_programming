#include "search_algos.h"

/**
 * binary_search - searches for a value using the binary search algorithm
 * @array: array of integers
 * @size: size of the array
 * @value: value to search
 * Return: i otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = (size - 1), i, m = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");

		for (i = l; i <= r; i++)
		{
			if (i == r)
			{
				printf("%d\n", array[r]);
				break;
			}
			else
				printf("%d, ", array[i]);
		}

		m = ((l + r) / 2);
		if (array[m] < value)
			l = (m + 1);
		else if (array[m] > value)
			r = (m - 1);
		else
			return (m);
	}
	return (-1);
}

/**
 * exponential_search - search for a value using the Expo search algorithm
 * @array: array of integers
 * @size: size of the array
 * @value: value to search
 * Return: i otherwise -1
 */

int exponential_search(int *array, size_t size, int value)
{
	int a;
	size_t jump, start;

	if (array == NULL || size == 0)
		return (-1);

	jump = 1;
	while (jump < size && array[jump] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		start = jump;
		jump *= 2;
	}
	if (jump >= (size - 1))
	{
		jump = (size - 1);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", start, jump);
	a = (binary_search(array + start, jump - start + 1, value));
	if (a == (-1))
		return (-1);
	return (a + start);
}
