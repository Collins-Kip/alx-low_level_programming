void print_rev(char *s)

{

	int a, len;



	for (len = 0; s[len] != '\0'; len++)

	{

		continue;

	}



	for (a = len - 1; a >= 0; a--)

	{

		_putchar(s[a]);

	}

	_putchar('\n');

}
