#include "function_pointers.h"

/**
 * print_name - calls the correspond function
 * @name: name to print
 * @f: pointer to the function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name)
		f("");
	else
		f(name);
}
