#include "main.h"

/**
* print_octal - converts number to octal
* @args: The arguments list
*
* Return: Number of bytes printed
*/
int print_octal(va_list args)
{
	int i, number = 0, bytesPrinted = 0;
	unsigned int octal_number;
	char octal[20];
	int base = 8;

	number = va_arg(args, int);
	octal_number = number;
	if (number < 0)
		octal_number = (unsigned int) number;
	i = 0;
	if (octal_number == 0)
	{
		octal[0] = '0';
		octal[1] = '\0';
	}
	else
	{
		while (octal_number)
		{
			octal[i++] = (octal_number % base) + '0';
			octal_number /= base;
		}
		octal[i] = '\0';
	}
	rev_string(octal);
	bytesPrinted += write(STDOUT_FILENO, octal, _strlen(octal));

	return (bytesPrinted);
}
