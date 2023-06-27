#include "main.h"

/**
 * print_char - prints a character
 *
 * @args: va_list arguments
 * Return: Number of byes printed
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);
	char buffer[1];
	int len;

	buffer[0] = c;
	len = write(1, &buffer, 1);

	return (len);
}
