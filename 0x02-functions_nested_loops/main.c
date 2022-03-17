#include "main.h"


/**
 * print_alphabet
 * Description : Print the Alphabet
 * Return : Always void 
 *
*/
void print_alphabet(void)
{
	char ch;

	for(ch = 'a' ; ch <= 'z' ; ch++) {
		putchar(ch);
	}
   	putchar('\n');
}
