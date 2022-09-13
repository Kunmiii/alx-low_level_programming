#include "main.h"
/**
* print_alphabet - prints the alphabet in lowercase seonly putchar.
* prototype: void print_alphabet(void);
* you can only use _putchar twice in your code
* Return: 0
*/
void print_alphabet(void)
{
int a;
a = 97;

while (a < 123)
{
_putchar(a);
a++;
}

_putchar('\n');
}
