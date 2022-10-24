#include "main.h"
#include <unistd.h>

/**
 * print_line - function that checks for uppercase character.
 * @n: is the integer for the paramaters of my function
 * Return: 0
 */

void print_line(int n)
{
	int a = 1;

	while (a <= n)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');

