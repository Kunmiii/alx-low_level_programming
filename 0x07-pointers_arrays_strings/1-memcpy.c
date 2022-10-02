#include "main.h"
#include <string.h>

/**
 * _memcpy - copy memory area
 * @dest: char array to copy into
 * @src: char array to copy from
 * @n: number of elements to copy
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp;

	temp = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (temp);
}
