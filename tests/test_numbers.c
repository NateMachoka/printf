#include "tests.h"

/**
* test_numbers - Tests numbers in deciaml format
*
* Return: void
*/
void test_numbers(void)
{
	int len1, len2;

	len1 = _printf("Decimal: [%d]", 598);
	len2 = printf("\tDecimal:[%d]", 598);
	printf("\tLength: [%d, %d]\n", len1, len2);

	len1 = _printf("Neg: [%d]", -598);
	len2 = printf("\tNeg:[%d]", -598);
	printf("\tLength: [%d, %d]\n", len1, len2);

	len1 = _printf("0: [%d]", 0);
	len2 = printf("\t0:[%d]", 0);
	printf("\tLength: [%d, %d]\n", len1, len2);
}
