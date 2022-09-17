#include <stdio.h>

/**
 * _isupper- A function that checks for uppercase characters.
 * @c: It represents and input character
 * Return: 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	char uppercase;
	int isupper = 0;

	for (uppercase = 'A'; uppercase
<= 'Z'; uppercase++)
	{
		if (c == uppercase)
			isupper = 1;
		break;
	}

	return (isupper);
}
