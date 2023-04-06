#include "main.h"
/**
 * _puts_recursion - print a string
 * @s: param of a string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	_putchar(*s);
}
