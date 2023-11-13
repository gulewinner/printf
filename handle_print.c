#include "main.h"

/**
 * handle_print - Prints an argument based on its type
 * @fmt: Formatted string
 * @list: List of arguments
 * @ind: Index
 * @buffer: Buffer array for printing
 * @flags: Active flags
 * @width: Width specification
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of characters printed or -1 for error
 */
int handle_print(const char *fmt, int *ind, va_list list, char buffer[],
	int flags, int width, int precision, int size)
{
	// Declare variables
	int i, unknown_len = 0, printed_chars = -1;
	fmt_t fmt_types[] = {
		{'c', print_char}, {'s', print_string}, {'%', print_percent},
		{'i', print_int}, {'d', print_int}, {'b', print_binary},
		{'u', print_unsigned}, {'o', print_octal}, {'x', print_hexadecimal},
		{'X', print_hexa_upper}, {'p', print_pointer}, {'S', print_non_printable},
		{'r', print_reverse}, {'R', print_rot13string}, {'\0', NULL}
	};

	// Iterate over the format types array
	for (i = 0; fmt_types[i].fmt != '\0'; i++)
	{
		// Check if the format specifier matches a type in the array
		if (fmt[*ind] == fmt_types[i].fmt)
			return (fmt_types[i].fn(list, buffer, flags, width, precision, size));
	}

	// Handle unknown format specifier
	if (fmt_types[i].fmt == '\0')
	{
		// Check for end of format string
		if (fmt[*ind] == '\0')
			return (-1);

		unknown_len += write(1, "%%", 1);

		// Handle space flag
		if (fmt[*ind - 1] == ' ')
			unknown_len += write(1, " ", 1);
		// Handle width specification
		else if (width)
		{
			--(*ind);
			while (fmt[*ind] != ' ' && fmt[*ind] != '%')
				--(*ind);
			if (fmt[*ind] == ' ')
				--(*ind);
			return (1);
		}

		unknown_len += write(1, &fmt[*ind], 1);
		return (unknown_len);
	}

	return (printed_chars);
}
