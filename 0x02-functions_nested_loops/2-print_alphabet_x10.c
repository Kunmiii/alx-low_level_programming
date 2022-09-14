#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in
 * lowercase, followed by a new line
 * prototype: void print_alphabet_x10(void);
 * you can only use _putchar twice in your code
 * Return: ALways 0
 */
void print_alphabet_x10(void)
{

	int i;

	i = 0;

	while (i < 11)
	{
		int a = 97;
		int z = 122;

		while (a <= z)
		{
			_putchar(a);
			a++;
		}
		
		i++;
		_putchar('\n');
	}
}
