#include "main.h"
#include <stdlib.h>
/**
 * _abs - computes value of an integr
 * @n: integer type number
 * Return: Absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
