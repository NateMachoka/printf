#include "tests.h"

/**
* test_integers - Tests integers using %i format
*
* Return: void
*/
void test_integers(void)
{
	int len1, len2;

	len1 = _printf("Integer: [%i]", 598);
	len2 = printf("\tInteger:[%i]", 598);
	printf("\tLength: [%d, %d]\n", len1, len2);

	len1 = _printf("Integer Neg: [%i]", -598);
	len2 = printf("\tInteger Neg:[%i]", -598);
	printf("\tLength: [%d, %d]\n", len1, len2);

	len1 = _printf("0: [%i]", 0);
	len2 = printf("\t0:[%i]", 0);
	printf("\tLength: [%d, %d]\n", len1, len2);
}
