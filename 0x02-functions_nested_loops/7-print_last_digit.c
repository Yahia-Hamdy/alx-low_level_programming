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
int ld
	if (c > 0)
	ld = c % 10;
	else
	ld = (c * -1) % 10;
	return (ld);
}
