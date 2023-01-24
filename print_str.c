#include "main.h"

/**
 * print_str - prints a string to stdout
 * @args: variadic parameter
 *
 * Return: number of characters printed
 */
int print_str(va_list args)
{
	int count = 0;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	return (count);
}
