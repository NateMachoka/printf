#include "main.h"

/**
* _strlen - returns the length of a string.
* @s: string
*
* Return: The length of te string.
*/
int _strlen(char *s)
{
	int len = 0, i;

	for (i = 0; s[i]; i++)
		len++;

	return (len);
}

/**
 * rev_string - reverse string
 * @s: string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, max, half;
	char first, last;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	max = i - 1;
	half = max / 2;
	while (half >= 0)
	{
		first = s[max - half];
		last = s[half];
		s[half] = first;
		s[max - half] = last;
		half--;
	}
}
