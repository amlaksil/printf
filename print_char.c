#include "main.h"

/**
 * print_char - prints a character to stdout
 * @args: variadic parameter
 *
 * Return: number of characters printed
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));

	return (1);
}
