#include "main.h"

/**
 *printAlpha - prints alphabet except c and k
 *
 * Return: void
 */

void printAlpha(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if(i == 'c' || i == 'k')
			continue;
		_putchar(i);
		_putchar('\n');
	}
	_putchar('\n');
}
