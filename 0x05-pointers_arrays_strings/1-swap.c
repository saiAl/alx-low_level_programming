#include "main.h"
/**
 * swap_int - function that swap integer.
 * @a: param for first number.
 * @b: param for the second number.
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}
