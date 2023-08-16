#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
 *print_last_digit - prints last digit
 *@c: check input of the function
 *Return: c
*/
int print_last_digit(int c)
{
	if (c > 0)
	_putchar(c % 10);
	else
	_putchar((c * -1) % 10);
	return (c);
}
