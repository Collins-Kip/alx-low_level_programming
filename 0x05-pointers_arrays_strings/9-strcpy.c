

char *_strcpy(char *dest, char *src)



{

	int i = 0, j = 0;

	while (src[i] != '\0')

	{

		i++;

	}

	for (j = 0; j < i + 1; j++)

	{

		dest[j] = src[j];

	}

	return (dest);

}
