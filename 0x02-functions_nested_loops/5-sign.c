#include "main.h"

/**
 * print_sign - check for -ve, +ve or o integer
 * @n: this is a real number
 *
 * Return: 0 if zero, 1 of > 0 and -1 if < 0
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
		_putchar('-';)
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
