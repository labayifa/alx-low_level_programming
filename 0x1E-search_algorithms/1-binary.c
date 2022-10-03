#include "search_algos.h"

/**
 * binary_search - Return the index of founded value in array
 * @array: array searched
 * @size: array size
 * @value: Searched for value (int)
 * Return: integer index of item searched or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0;
	int r = size - 1;
	int m = 0;
	int i = 0;

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		m =  (l + r) / 2;

		if (*(array + m) < value)
		{
			l = m + 1;
		}
		else if (*(array + m) > value)
		{
			r = m - 1;
		}
		else
		{
			return (m);
		}
	}

	return (-1);
}
