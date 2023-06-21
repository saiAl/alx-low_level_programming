#include "function_pointers.h"

/**
 * print_name - function that print a string.
 * @name: paramater for name
 * @f: pointer function
 * Return: Always 0.
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
