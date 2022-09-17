#include "main.h"

/**
 * _isdigit - it checks for digits (0 through to 9)
 * @c: An input integer
 * Return: 1 if c is a digit and 0 in other cases
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
