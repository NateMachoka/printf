#include "main.h"

/**
* print_HEX - converts number to hex and prints
* @args: The arguments list
*
* Return: The number of bytes printed
*/
int print_HEX(va_list args)
{
	char *hexValues = "0123456789ABCDEF";
	char hex[50];
	int number, i;
	unsigned int unsign_number;
	int base = 16, bytesPrinted = 0;
	char *error = "Error, could not print. Please try again";

	number = va_arg(args, int);
	unsign_number = number;
	if (number < 0)
		unsign_number = (unsigned int) number;
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
	bytesPrinted += write(STDOUT_FILENO, hex, _strlen(hex));
	if (bytesPrinted == -1)
		write(STDERR_FILENO, error, _strlen(error));

	return (bytesPrinted);
}
