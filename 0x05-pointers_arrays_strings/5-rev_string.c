void rev_string(char *s)

{

	  int l = _strlen(s);

	    int c;

	      char temp;



	        for (c = 0; c < l / 2; c++)

			    {

				          temp = s[c];

					        s[c] = s[l - c - 1];

						      s[l - c - 1] = temp;

						          }

		  printf("%s\n", s);

}
