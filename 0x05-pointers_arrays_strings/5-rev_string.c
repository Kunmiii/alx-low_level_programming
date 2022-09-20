#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: char array string type
 */
void rev_string(char *s)
{
	int _strlen = strlen(s);

	int i = _strlen - 1;
	
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
}
