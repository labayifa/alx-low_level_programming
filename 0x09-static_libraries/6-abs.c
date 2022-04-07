#include "main.h"

/**
 * _abs - return absolute or positive
 * of given number
 *
 * @n: number going to absolute
 * Return: n or -n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return ((-1) * n);
	}
	return (n);
}
