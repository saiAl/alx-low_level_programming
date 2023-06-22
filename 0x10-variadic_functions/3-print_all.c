#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_all - function that print arguments
 * @format: param
 * Return: void function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int j, i, len, sep;
	char type[4] = {'i', 'c', 'f', 's'};

	va_start(args, format);
	len = strlen(format);

	j = 0;
	while (j < len)
	{
		i = 0;
		while (type[i])
		{
			if (type[i] == format[j])
			{
				sep = 0;
				if (sep)
					printf(", ");

				switch (type[i])
				{
					case 'i':
						printf("%d, ", va_arg(args, int));
						break;
					case 'c':
						printf("%c, ", va_arg(args, int));
						break;
					case 'f':
						printf("%f, ", va_arg(args, double));
						break;
					case 's':
						switch (args == NULL)
						{
							case 1:
								printf("(nil)");
								break;
							default:
								printf("%s", va_arg(args, char*));
								break;
						}
						break;
					default:
						break;
				}
				sep = 1;
			}
			i++;
		}
		j++;
	}

	putchar('\n');
	va_end(args);
}

