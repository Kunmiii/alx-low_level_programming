#include <stdio.h>
/**
 * main - entry of the program
 * Description: THis program prints alphabets a-z
 * excluding leter q and e
 * Return: 0
 */
int main(void)
{
	char xter = 'a';

	while (xter <= 'z')
	{
		if (xter != 'e' && xter != 'q')
			putchar(xter);
		xter++;
	}
		putchar('\n');

	return (0);
}
