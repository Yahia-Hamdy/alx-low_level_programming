#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char l;
	for(l='a'; l<='z'; l++)
		putchar(l);
		putchar('\n');
}
