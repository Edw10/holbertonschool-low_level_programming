#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: the argumments count
 * @argv: the arguments array
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
