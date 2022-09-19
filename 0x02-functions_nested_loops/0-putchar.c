#include "main.h"



/**
 * main - Program that prints _putchar to the standardoutput
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	char word[9] = "_putchar";

	int x;

	for (x = 0; x < 8; x++)
		_putchar(word[x]);
			_putchar('\n');
			return (0);
}
