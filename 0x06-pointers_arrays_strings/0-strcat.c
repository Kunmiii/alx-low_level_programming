#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest : char data type for destination
 * @src: char data type for source
 * Description: Append the src string to the dest string
 * overwriting the terminating null byte at the end of dest
 * and then adds a terminating null byte
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
