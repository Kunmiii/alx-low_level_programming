#include "main.h"
#include <ctype.h>
/**
 * _islower - character is lowercase returns 1 , otherwise 0.
 * @c: returns 1 if c  is lowercase
 * Return: 1 if lowercase,otherwise 0 if lowercase
 */
int _islower(int c)
{

	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
