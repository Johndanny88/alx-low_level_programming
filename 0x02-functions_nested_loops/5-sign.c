#include "main.h"

/**
 * print_sign - check for -ve, +ve or 0 integers
 * @n: this is  real number 
 *
 * return 0 if zero, 1 if > 0, -1 if <0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
