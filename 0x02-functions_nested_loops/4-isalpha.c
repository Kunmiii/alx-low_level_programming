#include "main.h"
#include <ctype.h>
/**
 * _isalpha - character is uppercase returns 1 , otherwise 0.
 * @c: returns 1 if c  is uppercase
 * Return: 1 if uppercase, otherwise 0 if lowercase
 */
int _isalpha(int c)
{

	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
