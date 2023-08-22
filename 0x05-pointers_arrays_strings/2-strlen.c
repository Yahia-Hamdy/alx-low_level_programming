
#include "main.h"
#include <stdio.h>

/**
 *_strlen - counts string length
 *
 *@s: input string.
 *
 *Return: length
 */

int _strlen(char *s)
	{
	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}

	return (length);
}
