#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: char datatype destination
 * @src: char datatype source
 * @n: int datatype
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
