#include "main.h"
/**
 * print_sign - prints sign of a number.
 * @n: returns 1 and prints + if @n: is positive
 * @n: returns 0 and prints 0 if @n: is neutral
 * @n: returns -1 and prints - if @n: is negative
 * Return: 0 always
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
