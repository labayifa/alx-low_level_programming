#include "main.h"

/**
 * print_alphabet - Custom print aplahbet
 * Description: Print the Alphabet
 * Return: Always void.
 *
*/
void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
