#include "tests.h"

/**
* test_hex- Tests numbers in hexadecimal using %x format
*
* Return: void
*/
void test_hex(void)
{
	int len1, len2;

	len1 = _printf("Hex:  [%x]", 598);
	len2 = printf("\tHex: [%x]", 598);
	printf("\tLength: [%d, %d]\n", len1, len2);

	len1 = _printf("Hex Neg: [%x]", -598);
	len2 = printf("\tHex Neg:[%x]", -598);
	printf("\tLength: [%d, %d]\n", len1, len2);

	len1 = _printf("0: [%x]", 0);
	len2 = printf("\t0:[%x]", 0);
	printf("\tLength: [%d, %d]\n", len1, len2);
}
