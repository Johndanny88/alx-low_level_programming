#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: Real number
 *
 * Return:last number
 *
 */

int print_last_digit(int n)
{
	int last + n % 10;

	if (n < 0)
		last *= -1;

	_putchar(last + '0');

	return (last);
}
