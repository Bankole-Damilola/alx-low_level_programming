#include "main.h"
#include <unistd.h>

/**
 * more_numbers - A fun tion that printz 10 dows of 0 to 14
 *
 * Return: Returns void
 */

void more_numbers(void)
{
	int i, j;

	i = 0;
	j = 0;

	while (j <= 9)
	{
		while (i <= 14)
		{
			if (i > 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			i++;
		}

		_putchar('\n');
		j++;
		i = 0;
	}
}
