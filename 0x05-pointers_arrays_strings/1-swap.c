
#include "main.h"
#include <stdio.h>

/**
 *swap_int - swaps values of two ints
 *
 *@a: input val 1.
 *@b: input val 2.
 *
 *
 */

void swap_int(int *a, int *b)
{
	int swp_var;

	swp_var = *a;
	*a = *b;
	*b = swp_var;
}
