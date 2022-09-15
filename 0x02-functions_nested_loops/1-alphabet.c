#include "main.h"

/**
 * prints _alphabet - program
 *
 * returns 0
 */
void print_alphabet(void)
{
	int x;
	
	for (x = 97; x <= 122; x++)
	{
		_putchar(x);
	}
	_putchar('\n')
}
