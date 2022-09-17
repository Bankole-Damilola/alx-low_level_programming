#include "main.h"
#include <unistd.h>

/**
 * print_most_numbers - Prints 0 to 9 with the exemption of 2 and 4
 *
 * Return: Returns void
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
