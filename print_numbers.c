#include "main.h"

/**
* print_numbers - print numbers to the standard output
* @args: The arguments list
*
* Return: The number of bytes printed
*/
int print_numbers(va_list args)
{
	unsigned int digit, u_number, divisor = 1;
	int i, j, bytesPrinted = 0, isNegative = 0;
	char numbers[20];
	int number = va_arg(args, int);

	if (number < 0)
	{
		isNegative = 1;
		u_number = -number;
	}
	else
		u_number = number;
	while (u_number / divisor >= 10)
		divisor *= 10;
	i = 0;
	if (isNegative)
		numbers[i++] = '-';
	while (divisor != 0)
	{
		digit = (u_number / divisor) + 48;
		numbers[i++] = digit;
		u_number %= divisor;
		divisor /= 10;
	}
	for (j = 0; j < i; j++)
	{
		write(1, &numbers[j], 1);
		bytesPrinted++;
	}
	return (bytesPrinted);
}
