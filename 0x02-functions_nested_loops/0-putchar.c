#include <unistd.h>

/**
 * main - prints _putchar
 *
 * Return: Always 0
 */
int main(void)
{
	char text[9] = "_putchar";

	int x;

	for (x = 1;x < 9; x++)
		_putchar(text[x]);
			_putchar('\n');
			return (0);
}
