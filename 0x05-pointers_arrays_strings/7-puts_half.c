#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half - prints half of a string, followed by a line
 * @str: string stype char
 */
void puts_half(char *str)
{
	int i, m;

	m = (strlen(str) / 2);

		for (i = m; str[m] != '\0'; i++)
		{
			_putchar(str[m]);
			m++;
		}

		_putchar('\n');

		if (m % 2 == 1)
		{
			_putchar(str[(strlen(str) - 1) / 2]);
		}
}
