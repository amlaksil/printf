#include "main.h"

/**
 * print_str - prints a string to stdout
 * @args: variadic parameter
 *
 * Return: number of characters printed
 */
int print_str(va_list args)
{
	int i, count = 0, value = 0;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		return (-1);
	while (str[i])
	{
		value = _putchar(str[i]);
		count += value;
		i++;
	}
	return (count);
}
