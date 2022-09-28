#include "main.h"
/**
 * factorial - return factorial of a given number.
 * @n: int type number
 * Return: factorail of number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	else
		return (n * factorial(n - 1));
}
