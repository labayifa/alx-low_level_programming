#include "main.h"

/**
 * _isupper - Check if an int value is upper or not
 * Description : UpperCase check function
 * Return : 0 or 1
*/
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
