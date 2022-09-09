#include <unistd.h>
/**
 * main - this is the entry point to the program
 * Description: prints exact string followed by a new line
 * Return: return 1 after success
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
