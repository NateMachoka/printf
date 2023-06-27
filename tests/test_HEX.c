#include "tests.h"

/**
* test_HEX- Tests numbers in hexadecimal using %X format
*
* Return: void
*/
void test_HEX(void)
{
	int len1, len2;

	len1 = _printf("HEX: [%X]", 598);
	len2 = printf("\tHEX:[%X]", 598);
	printf("\tLength: [%d, %d]\n", len1, len2);

	len1 = _printf("HEX Neg: [%X]", -598);
	len2 = printf("\tHEX Neg:[%X]", -598);
	printf("\tLength: [%d, %d]\n", len1, len2);

	len1 = _printf("0: [%X]", 0);
	len2 = printf("\t0:[%X]", 0);
	printf("\tLength: [%d, %d]\n", len1, len2);
}
