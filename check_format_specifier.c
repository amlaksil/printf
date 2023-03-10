#include "main.h"

/**
 * check_format_specifier - checks the character if it is a valid format
 * specifier and assigns an appropriate function for printing
 * @format: format specifier
 * Return: function pointer
 */
int (*check_format_specifier(const char *format))(va_list)
{
	int i = 0;
	ftype form_array[] = {{"c", print_char},
			      {"s", print_str},
			      {"%", print_percent},
			      {"i", print_int},
			      {"d", print_int},
			      {"b", print_binary},
			      {"u", print_uint},
			      {"o", print_octal},
			      {"x", print_hexadecimal},
			      {"X", print_hexadecimal2},
			      {"S", print_str2},
			      {"p", print_pointer},
			      {"r", print_revstr},
			      {"R", print_rot13str},
			      {NULL, NULL}};

	while (form_array[i].tmp != NULL)
	{
		if (*(form_array[i].tmp) == *format)
		{
			return (form_array[i].f);
		}
		i++;
	}
	return (NULL);
}
