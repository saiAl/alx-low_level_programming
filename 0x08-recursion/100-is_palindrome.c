#include "main.h"
#include <string.h>

int loop_through_string(char *str, int start, int end);

/**
 * is_palindrome - function to check given string.
 * @s: param
 * Return: 1 if it palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int len;

	len = strlen(s);

	if (len == 0)
		return (1);
	return (loop_through_string(s, 0, len - 1));
}

/**
 * loop_through_string - function to loop through the string and check
 * @str: param
 * @start: param
 * @end: param
 * Return: 1 if it palindrom, otherwise 0.
 */

int loop_through_string(char *str, int start, int end)
{
	if (start == end)
		return (1);
	if (str[start] != str[end])
		return (0);
	if (start < end + 1)
		return (loop_through_staring(str, start + 1, end - 1));
	return (1);
}
