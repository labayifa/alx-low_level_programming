#include "main.h"

/**
 * _islower - checks if letters are lower.
 * @c: input.
 *
 * Return: 1 if c is lower
 * 0 otherwise.
 */
int _islower(int c)
{
	if ((c > 97) && (c < 122))
	{
		return (1);
	}
	return (0);
}
