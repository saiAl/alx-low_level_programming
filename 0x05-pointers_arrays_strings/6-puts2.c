#include "main.h"
#include <string.h>

/**
 * puts2 - print string
 * @s: param
 *  Return: always 0.
 */

void puts2(char *s)
{
	int length;
	int i;

	length = strlen(s);
	for (i = 0; i < length; i += 2)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
