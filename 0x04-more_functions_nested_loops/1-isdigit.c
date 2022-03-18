#include "main.h"

/**
 * @c: second input
 * Return: whether a char is digit or not
 */
int _isdigit(int c)
{
	if ((c > 47) && (c < 58))
	{
		return (1);
	}
	return (0);
}
