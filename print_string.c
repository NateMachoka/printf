#include "main.h"

/**
 * print_string - print specified string
 * @str - string to be printed
 * @args: arguments
 * Return: Number of byes printed
 */

int print_string(va_list args)
{
	char *str = va_arg(args, char*);
	int len = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		len += write(1, str, 1);
		str++;
	}

	return (len);
}
