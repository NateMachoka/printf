#include "main.h"

/**
* *get_spec_func - Selects a function corresponding to a matching
* specifier
* @specifier: A character specifier
* @args: Arguments list of type va_list
*
* Return: A pointer to a function that corresponds to the
* specifier
*/
int get_spec_func(char specifier, va_list args)
{
	f_dt spec_ops[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_numbers},
		{'i', print_numbers},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hex},
		{'X', print_HEX},
		{'\0', NULL}
	};
	int i;

	i = 0;
	while (spec_ops[i].specifier)
	{
		if (spec_ops[i].specifier == specifier)
			return (spec_ops[i].f(args));
		i++;
	}
	return (0);
}
