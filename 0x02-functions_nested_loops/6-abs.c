#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
 *_abs - computes abs value
 *@c: check input of the function
 *Return: c
*/
int _abs(int c)
{
	if (c < 0)
	return (c * -1);
	else
	return (c);
}
