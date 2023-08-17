#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 *_isupper - checks whether the letetr is uppercase or not
 *
 *@c: input var
 *
 *Return: 1 if uppercase , 0 if not.

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
