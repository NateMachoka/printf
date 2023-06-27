#include "main.h"

/**
* print_hex - converts number to hex and prints
* @args: The arguments list
*
* Return: The number of bytes printed
*/
int print_hex(va_list args)
{
	char *hexValues = "0123456789abcdef";
	char hex[50];
	int number, i;
	unsigned int unsign_number;
	int base = 16, count = 0;

	number = va_arg(args, int);
	if (number < 0)
		unsign_number = (unsigned int) number;
	else
		unsign_number = number;
	if (unsign_number == 0)
	{
		hex[0] = '0';
		hex[1] = '\0';
	}
	else
	{
		i = 0;
		while (unsign_number)
		{
			hex[i++] = hexValues[unsign_number % base];
			unsign_number /= base;
		}
		hex[i] = '\0';
	}
	rev_string(hex);
	count += write(STDOUT_FILENO, hex, _strlen(hex));

	return (count);
}
