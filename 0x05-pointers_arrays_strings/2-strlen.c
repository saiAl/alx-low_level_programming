#include "main.h"
/**
 * _strlen - return length of a string.
 * @s: param holds the string.
 *  Return: integer of the string length.
 */


int _strlen(char *s)
{
	int i;
	int length;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
