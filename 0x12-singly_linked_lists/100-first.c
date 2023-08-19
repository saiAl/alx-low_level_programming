#include <stdio.h>

#define M "You're beat! and yet, you must allow,\nI bore my house upon my back!"

void befor(void) __attribute__((constructor));

/**
 * befor - function that print befor the main execute
 * Return: void
 */
void befor(void)
{
	printf("%s\n", M);
}
