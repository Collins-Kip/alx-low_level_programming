#include <stdio.h>

/**
 * main - Swap the value of two integers
 *
 * return: void
 */

void swap_int(int *a, int *b)
{
	  int temp;

	    temp = *a;
	      *a = *b;
	        *b = temp;
}
