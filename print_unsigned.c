#include "main.h"

/**
* print_unsigned - print unsigned numbers to the standard output
* @args: The arguments list
*
* Return: The number of bytes printed
*/
int print_unsigned(va_list args)
{
	unsigned int digit, unsigned_number, divisor = 1;
	int i, j, bytesPrinted = 0;
	char numbers[20];
	int number = va_arg(args, int);

	if (number < 0)
		unsigned_number = (UINT_MAX + 1) - (-number);
	else
		unsigned_number = number;
	while (unsigned_number / divisor >= 10)
		divisor *= 10;
	i = 0;
	while (divisor != 0)
	{
		digit = (unsigned_number / divisor) + 48;
		numbers[i++] = digit;
		unsigned_number %= divisor;
		divisor /= 10;
	}
	for (j = 0; j < i; j++)
	{
		write(1, &numbers[j], 1);
		bytesPrinted++;
	}
	return (bytesPrinted);
}
