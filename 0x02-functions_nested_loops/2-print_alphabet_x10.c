#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *print_alphabet_x10 -  prints the alphabet 10 times
 *
 *Return: void
*/
void print_alphabet_x10(void)
{
char l;
int t;
	for (t = 1 ; t <= 10 ; t++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{ _putchar(l); }
		_putchar('\n');
	}
}
