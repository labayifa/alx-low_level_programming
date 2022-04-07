#include "main.h"

/**
 * _isdigit - checks if letters are digit.
 * @c: input.
 *
 * Return: 1 if c is digit
 * 0 otherwise.
 */
int _isdigit(int c)
{
	if ((c > 47) && (c < 58))
	{
		return (1);
	}
	return (0);
}
