#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * Return: If no natural sqroot, return -1, else return natural
 * square root
 */

int _sqrt_recursion(int n)
{
	if (sqrt(n) > 0)
		return (1 *  _sqrt_recursion(n));
	else
		return (-1);
}
