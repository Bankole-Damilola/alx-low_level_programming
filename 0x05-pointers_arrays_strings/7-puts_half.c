#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: declaration of n and paramters for the function
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i, j, division;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	division = i / 2;

	j = 0;
	while (str[j] > 0)
	{
		if ((str[j] >= str[division]) && (str[j] != '\0'))
		{
			_putchar (str[j]);
		}
		j++;
	}
	_putchar ('\n');
}
