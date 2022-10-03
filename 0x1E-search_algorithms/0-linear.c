#include "search_algos.h"

/**
 * linear_search - Return the index of founded value in array
 * @array: array searched
 * @size: array size
 * @value: Searched for value (int)
 * Return: integer index of item searched or -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	int n = size;

	if (n < 1)
	{
		return (-1);
	}

	for (i = 0; i < n; i++)
	{
		if (*(array + i) == value)
		{
			return (i);
		}
	}

	return (-1);
}
