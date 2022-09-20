#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - prints a string inreverse, 
 * followed by a new line
 * @s: pointer type char
 */
void print_rev(char *s)
{
	int _strlen = strlen(s);
	int i;

	for (i = _strlen - 1; i >= 0; i--)
		_putchar(s[i]);
}
