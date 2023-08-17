#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 *print_numbers - prints from 0 till 9
 *
 *@i: counting var
 *
 *
 *Return: void.
*/

void print_numbers(void)
{
int i;
for (i = 48; i < 58; i++)
	_putchar(i);
_putchar('\n');
}
