#include "main.h"
/**
 * cap_string - capitalize all words of a string
 *
 * @s: string
 * Return: `s`
 */

char *cap_string(char *s)
{
		int i, m;
		int t;

		char xter[] = ",;.!?(){}\n\t\" ";

		for (i = 0, t = 0; s[i] != '\0'; i++)
		{
			if (s[0] > 96 && s[0] < 123)
				t = 1;
			for (c = 0; xter[m] != '\0'; c++)
			{
				if (xter[m] == str[i])
					t = 1;
			}

			if (t)
			{
				if (s[i] > 96 && s[i] < 123)
				{
					str[i] -= 32;
					t = 0;
				}
				else if (s[i] > 64 && s[i] < 91)
					t = 0;
				else if (s[i] > 47 && s[i] < 58)
					t = 0;
			}
		}

		return (s);

}
