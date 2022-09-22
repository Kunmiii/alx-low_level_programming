#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @d: string datatype
 * Return: d
 */
char *string_toupper(char *d)
{
		int i;

		for (i = 0; d[i] != '\0'; i++)
		{
			if (d[i] > 96 && d[i] < 123)
			{
				d[i] -= 32;
			}
		}

		return (d);

}
