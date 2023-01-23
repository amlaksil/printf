#include "main.h"

/**
 * _printf - writes the C string pointed by format to the standard output
 * @format: is a character string
 *
 * Return: On success, the total number of characters written
 * If error occurs, a negative number is returned
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0, value = 0;
	int (*f)(va_list);
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
		{
			value = _putchar(format[i]);
			count += value;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			f = check_format_specifier(&format[i + 1]);
			if (f != NULL)
			{
				value = f(args);
				count += value;
				i = i + 2;
				continue;
			}
			if (format[i + 1] == '\0')
			{
				break;
			}
			if (format[i + 1] != '\0')
			{
				value = _putchar(format[i + 1]);
				count += value;
				i = i + 2;
				continue;
			}
		}
	}
	return (count);
}
