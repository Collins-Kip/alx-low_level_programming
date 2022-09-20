lf(char *str)

{

		int len = find_length(str);

			int half;



				if (len % 2 == 0)

							half = len / 2;

					else

								half = (len - 1) / 2;

						for (; half < len; half++)

									_putchar(str[half]);

							_putchar('\n');

}
