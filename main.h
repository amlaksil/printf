#ifndef _PRINTF_
#define _PRINTF_

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int (*check_format_specifier(const char *format))(va_list);

/**
  * struct function - containes character and function pointer
  * @tmp: character pointer which points to valid format specifier
  * @f: function pointer which points format specifier function
  */

typedef struct function
{
	char *tmp;
	int (*f)(va_list);
} ftype;
int print_char(va_list);
int print_str(va_list);
int print_percent(va_list);
int print_int(va_list);
int print_binary(va_list);
int print_uint(va_list);
int print_octal(va_list);
int print_hexadecimal(va_list);
int print_hexadecimal2(va_list);
int print_str2(va_list);
int print_pointer(va_list);
int print_revstr(va_list);
int print_rot13str(va_list);
#endif
