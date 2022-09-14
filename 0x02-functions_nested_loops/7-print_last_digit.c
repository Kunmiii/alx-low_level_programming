#include "main.h"
/**
 * print_last_digit - prints last digit of an integer.
 * @n: type integer
 * Return: valueof the last digit
 */
int print_last_digit(int n)
{
	int s;

	if (n < 0)
	{
		s = -1 * (n % 10);
		_putchar(s + '0');
		return (s);
	}
	else
	{

		s = n % 10;
		_putchar(s + '0');

		return (s);
	}
}
