#include <stdio.h>
#include "main.h"
/**
 *print_sign -  prints the of a numbers
 *
 *Return: 0 or 1 or -1
*/
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar("+");
	_putchar("\n");
	return (1);
	}
	else if (n == 0)
	{
	_putchar("0");
	_putchar("+");
	return (0);
	}
	else
	{
	_putchar("-");
	_putchar("+");
	return (-1);
	}
}
