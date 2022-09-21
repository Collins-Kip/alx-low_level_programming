void rev_string(char *s)

{

	int i, j;

	char temp;



	for (i = 0; s[i] != '\0'; i++)

	{

		continue;

	}



	j = 0;

	i--;



	while (j < i)

	{

		temp = s[j];

		s[j] = s[i];

		s[i] = temp;

		j++;

		i--;

	}

}
