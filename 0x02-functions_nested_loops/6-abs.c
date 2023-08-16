#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
 *_isalpha - checks if a letter  or not
 *@c: check input of the function
 *Return: 0 or 1
*/
int _isalpha(int c)
{
	if (isalpha(c))
	return (1);
	else
	return (0);
}
