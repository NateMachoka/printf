#include "tests.h"

/**
* test_octal - Tests numbers in octal using %o format
*
* Return: void
*/
void test_octal(void)
{
	int len1, len2;

	len1 = _printf("Octal: [%o]", 598);
	len2 = printf("\tOctal:[%o]", 598);
	printf("\tLength: [%d, %d]\n", len1, len2);

	len1 = _printf("Octal Neg: [%o]", -598);
	len2 = printf("\tOctal Neg:[%o]", -598);
	printf("\tLength: [%d, %d]\n", len1, len2);

	len1 = _printf("0: [%o]", 0);
	len2 = printf("\t0:[%o]", 0);
	printf("\tLength: [%d, %d]\n", len1, len2);
}
