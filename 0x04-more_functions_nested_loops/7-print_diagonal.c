#include "main.h"
/**
 * print_diagonal - draws a diagonal line in the terminal.
 * @n: is the number of times the character _ should be printed
 *
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar(' ');
	_putchar('\');
	_putchar('\n');
	}
}
