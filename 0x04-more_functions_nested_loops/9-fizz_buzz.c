#include "main.h"
#include <stdio.h>
/**
 *maion - prints number form 1 to 100e xcept for some exceptions.
 *@i: is the number of times the character _ should be printed
 *Return: 0 Always  Success
 */
int main(int)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			{
			printf("Fizz ");
			continue;
			}
		if (i % 5 == 0)
			{
			printf("Buzz ");
			continue;
			}
		if (i % 3 == 0 && i % 5 == 0)
			{
			printf("FizzBuzz ");
			continue;
			}
		printf("%d ", i);
	}
	printf("\n");
	return (0);
}
