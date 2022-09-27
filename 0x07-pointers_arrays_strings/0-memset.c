#include "main.h"
#include <string.h>

/**
 * _memset - fills memeory with a constant byte
 * @s: buffer array
 * @b: constant byte
 * @n: number of bytes of memory aea to fill
 * Description: Fill the the first n bytes of the memory area pointed to by 's'
 * with the constant byte 'b'
 * Return: pointer to memory 's'
 */

char *_memset(char *s, char b, unsigned int m)
{
	memset(s, b, m);
	_putchar('\n');

	return (s);
}
