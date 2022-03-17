#include "main.h"

/**
 * _isupper - Check if an int value is upper or not
 * Description : UpperCase check function
 * Return : Always 0 or 1 
 *
*/
int _isupper(int c)
{
	if(c >= 65 && c <= 90)
	{
		return (1);
	}
	
	return (0);
}
