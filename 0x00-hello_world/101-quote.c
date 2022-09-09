#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - this is the entry point to the program
 * Description: prints exact string followed by a new line
 * Return: 1
 */
int main(void)
{
	int s = strlen("and that piece of art is useful - Dora Korpar, 2015-10-19\n");
	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", s);
	return (1);
}
