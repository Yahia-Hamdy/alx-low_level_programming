#include "main.h"
#include <stdio.h>

/**
 *_puts2 - prints a string.
 *
 *@str: input string.
 *
 *
 */

void _puts2(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str = str + 2;
	}
	_putchar('\n');
}
