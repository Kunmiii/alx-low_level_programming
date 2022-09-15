#include <unistd.h>
/**
 * _putchar - writes the character c to standard output
 * 
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
