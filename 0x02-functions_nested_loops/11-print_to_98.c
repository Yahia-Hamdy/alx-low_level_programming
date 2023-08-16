#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
 *print_to_98 - prints till 98
 *
 *@n: check input of the function
 *
 *Return: 0 (success)
*/
void print_to_98(int n)
while (n < 98)
{
printf("%d, ", n);
n = n + 1;
}
printf("98\n");
return (0);
}
