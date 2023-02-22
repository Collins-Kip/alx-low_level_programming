#include <stdio.h>
#include <unistd.h>

/*
 * main - check the code
 *
 * Description: 'check the code'
 *
 * print_alphabet - the function code
 *
 * Description: 'the function code'
 *
 * Return: Always 0(success)
 */

void print_alphabet(void)
{
char letter;
letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
}

int main(void)
{
print_alphabet();
return (0);
}
