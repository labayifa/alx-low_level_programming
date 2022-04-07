#include "main.h"

/**
 *_isupper - checks if letters are uppercase.
 *@c: input.
 *
 *Return: 1 if c is uppercase
 *0 otherwise.
 */
int _isupper(int c)
{
	if ((c > 64) && (c < 91))
	{
		return (1);
	}
	return (0);
}
