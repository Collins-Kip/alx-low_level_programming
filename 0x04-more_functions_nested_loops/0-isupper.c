#include<stdio.h>

/**
 * main - checks for uppercase characters
 *
 * return 1;
 * always when the character is uppercase
 * 0 if not
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
