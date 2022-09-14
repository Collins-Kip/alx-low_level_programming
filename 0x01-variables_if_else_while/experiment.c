#include<stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: 0
 */

int main(void)
{ 
  char a;
  while (a <= 'z')
    { 
      if(a == 'e' || a == 'q')	
	{
	  continue;
	}
      putchar(a);
      a++;
    }
  return (0);
} 
