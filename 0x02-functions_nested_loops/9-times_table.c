#include "main.h"
#include <stdio.h>

/**
 * times_table - Function that prints the result of time table from 0 to 9
 *
 * Return: 0
 */

void times_table(void)
{
	int a, b;

	a = 0;
	while (a <= 9);
		{
			b = 0;
			while (b <= 9);
			a = a * b;
			b++;
		}
	a++;
	printf("%d, \n", a);
}
