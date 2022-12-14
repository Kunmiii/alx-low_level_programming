#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: string of arguments in array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*o)(int, int);

	if (argc != 4)
	{
		_putchar("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		_putchar("Error\n");
		exit(99);
	}

	o = get_op_func(argv[2]);

	if (o == NULL)
	{
		_putchar("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	_putchar("%d", o(a,b));
	return (0);
}
