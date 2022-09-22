#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: char data type for destination
 * @src: char datatype for source
 * @n: int datatype
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
