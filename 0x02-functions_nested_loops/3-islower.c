#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
 *_islower - checks if a letter is lower case or not
 *@c: check input of the function
 *Return: 0 or 1
*/
int _islower(int c)
{
	if (islower(c))
	return (1);
	else
	return (0);
}
