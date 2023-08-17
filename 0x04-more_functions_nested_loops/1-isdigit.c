#include <stdio.h>
#include "main.h"

/**
 *_isdigit - checks whether this a number or not
 *
 *@c: functions' input
 *
 *Return: 1 if digit , 0 if not.
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
