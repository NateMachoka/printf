#ifndef _HEADER_
#define _HEADER_
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include <limits.h>

/**
 * struct formats - defines a specifier and its corresponding function
 * @specifier: character specifier representantion
 *
 * @f: pointer to functions corresponding to specifier
 */

typedef struct formats
{
	char specifier;
	int (*f)(va_list);
} f_dt;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list);
int is_printable(char);
int print_numbers(va_list);
int print_octal(va_list);
int print_unsigned(va_list);
int print_hex(va_list);
int print_HEX(va_list);
int get_spec_func(char, va_list);
int _strlen(char *);
void rev_string(char *);

#endif
