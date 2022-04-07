#include "main.h"

/**
 * _isalpha - checks if letters are alpha.
 * @c: input.
 *
 * Return: 1 if c is alpha
 * 0 otherwise.
 */
int _isalpha(int c)
{
	if (!(c > 47) && (c < 58))
	{
		return (1);
	}
	return (0);
}
