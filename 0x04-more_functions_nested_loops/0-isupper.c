#include<stdio.h>
#include"main.h"

/**
 * main - checks for uppercase characters
 *
 *return 1 always when the character is uppercase
 *0 if not
 */

int main(void)
{
int retun;
char c;
printf('Enter a letter \n');
scanf('%c', c);
if (c >= 'A', c <= 'Z');
{
retun = 1;
}
else;
{
retun = 0;
}
return (retun);
}
