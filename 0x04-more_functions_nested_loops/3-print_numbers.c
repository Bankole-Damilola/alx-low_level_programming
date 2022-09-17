#include "main.h"
#include <unistd.h>

/**
 * print_numbers - A function that prints number from 0 to 9
 *
 * Return: retirns void
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
