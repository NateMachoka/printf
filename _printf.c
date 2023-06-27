#include "main.h"

/**
 * _printf - a function that prints to stdout
 * @format: conversion specifier to print
 * args: a va_list of argument sprovided to _printf
 *
 * Return: count
 */

int _printf(const char *format, ...)
{
	unsigned int i, count = 0;
	va_list args;
	char specifier;

	va_start(args, format);

	if (format == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && (format[i + 1] == '%' || format[i + 1] == '\0'))
		{
			write(1, &format[i], 1);
			count++;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			specifier = format[i + 1];
			count += get_spec_func(specifier, args);
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
	}
	va_end(args);
	return (count);
}
