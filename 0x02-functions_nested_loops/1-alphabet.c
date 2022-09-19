#include "main.h"

/**
 *  print_alphabet - Prints a-z in lowercase
 *
 * returns : nothing (null void)
 */
void print_alphabet(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
