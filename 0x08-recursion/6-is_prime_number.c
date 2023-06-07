#include "main.h"

int check(int m, int i);

/**
 * is_prime_number - function check if a number is prime.
 * @n: param
 * Return: 1 if n is prime, 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check(n, n / 2));
}

/**
 * check - function evaluate the number given by is_prime
 * @m: param
 * @i: param
 * Return: return 1 or 0.
 */

int check(int m, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (m % i == 0)
			return (0);
		else
			return (check(m, i - 1));
	}
}
