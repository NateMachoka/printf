#include "tests.h"

/**
* test_unsigned - Tests unsigned integers using %u format
*
* Return: void
*/
void test_unsigned(void)
{
	int len1, len2;

	len1 = _printf("Unsigned Integer: [%u]", 598);
	len2 = printf("\tUnsigned Integer:[%u]", 598);
	printf("\tLength: [%d, %d]\n", len1, len2);

	len1 = _printf("Unsigned Integer Neg: [%u]", -598);
	len2 = printf("\tUnsigned Integer Neg:[%u]", -598);
	printf("\tLength: [%d, %d]\n", len1, len2);

	len1 = _printf("0: [%u]", 0);
	len2 = printf("\t0:[%u]", 0);
	printf("\tLength: [%d, %d]\n", len1, len2);
}
