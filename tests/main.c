#include <stdio.h>
#include "../main.h"
#include "tests.h"

/**
* main - Start of application
*
* Return: 0 if success, otherwise error
*/
int main(void)
{
	printf("\n\tTESTS NUMBERS\n");
	test_numbers();

	printf("\n\tTESTS INTEGERS\n");
	test_integers();

	printf("\n\tTESTS UNSIGNED INTEGERS\n");
	test_unsigned();
	
	printf("\n\tTESTS OCTAL\n");
	test_octal();

	printf("\n\tTESTS hex\n");
	test_hex();

	printf("\n\tTESTS HEX\n");
	test_HEX();

	return (0);
}
