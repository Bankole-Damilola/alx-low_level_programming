#include "main.h"

/**
 * _isdigit - it chevks for digits (0 through to 9)
 * @c: An input integer
 * Returns 1 if c is a digit and 0 in other cases
 */

int _isdigit(int c)
{
	int letters = 0;
	char isdigit;

	for (isdigit = '0'; isdigit <= '9'; isdigit++)
	{
		if (isdigit == c)
			letters = 1;
		break;
	}

	return (letters);
}
