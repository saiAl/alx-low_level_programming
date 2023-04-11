#include <unistd.h>
/**
 * _putchar - function that checks if a letter is lowerCase
 * @c: is the character being checked.
 * Return: 1 on Success.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
