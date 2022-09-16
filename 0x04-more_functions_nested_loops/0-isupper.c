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
