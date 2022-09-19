#include "main.h"

/**
 *
 * print_alphabet_x10 - Prints a-z in lowercase 10 times
 *
 * return : nothing (null void)
 *
 */
void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 97; b <+ 122; b++)
		{
			_putchar(b);
		}
	_puchar('\n')
	}
}
