#include "main.h"

/*
 * Main - Entry point
 *
 * Description: Program that prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
char str[100]="_putchar";
for(int i=0 ; i < strlen(str); i++);{
_putchar(str[i]);
}
return (0);
}
