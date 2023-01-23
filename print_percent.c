#include "main.h"

/**
 * print_percent - prints a character % in stdout
 * @args: variadic parameter
 *
 * Return: number of charactes printed
 */
int print_percent(va_list args)
{
	(void)args;

	_putchar('%');
	return (1);
}
