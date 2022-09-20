void puts2(char *str)

{

	  int c = 0;



	    while (str[c] != '\0')

		        {

				      if ((c + 1) % 2 == 0)

					      	{

								  putchar(str[c]);

								  	}

				            c++;

					        }

	      putchar('\n');

}
