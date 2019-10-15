#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: the argumments count
 * @argv: the arguments array
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
