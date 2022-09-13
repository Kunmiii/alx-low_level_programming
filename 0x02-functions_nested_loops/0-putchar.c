#include "main.h"
/**
 * main - program entry
 * Description: wrtie a program that prints _putchar
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	char char_lib[] = "_putchar";
	int a = 0;

	while (char_lib[a] != '\0')
	{
		_putchar(char_lib[a]);
		a++;
	}

	_putchar('\n');

	return (0);
}
