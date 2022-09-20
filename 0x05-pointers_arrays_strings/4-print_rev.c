void print_rev(char *s)
	
{

  int l = _strlen(s);

  int c;



  for (c = l - 1; c >= 0; c--)

    {
    
          putchar(s[c]);
    
        }

  putchar('\n');

}}
