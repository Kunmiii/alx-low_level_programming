#include "main.h"
/**
* main - program entry.
* Description: A program that prints the alphabet, in lowercase
* Return: 0
*/
void print_alphabet(void)
{
int a;
a = 97;

while (a < 123)
{
_putchar(a);
}

_putchar('\n');

return (0);
}
