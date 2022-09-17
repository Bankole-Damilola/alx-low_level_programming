#include "main.h"
#include <unistd.h>

/**
 * main - This prints _putchar to the std output
 *
 * Return: returns 0
 */

int main(void)
{
	char i[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	unsigned int c;

	for (c = 0; c < sizeof(i); c++)
	{
		_putchar(i[c]);
	}
	_putchar('\n');
	return (0);
}
