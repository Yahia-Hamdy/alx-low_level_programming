#include "main.h"
/**
 * print_square - prints a square dollwed by a new line in the terminal.
 * @size: is the number of times the character _ should be printed
 *
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
			_putchar('#');
	_putchar('\n');
	}
	}
}
