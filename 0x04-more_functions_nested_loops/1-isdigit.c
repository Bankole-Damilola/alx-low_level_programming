#include <stdio.h>

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
