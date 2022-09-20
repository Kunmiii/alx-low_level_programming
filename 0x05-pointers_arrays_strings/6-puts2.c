#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts2 - prints every other xters of string
 * starting from the first xter
 * @str: string type char
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		if (str[i] == '\0')
			break;
		_putchar(str[i]);
	}

	_putchar('\n');
}
