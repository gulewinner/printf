#include "main.h"

// Function declaration
void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - Custom printf function
 * @format: The format string
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	// Variable declarations
	int i, printed = 0, printed_chars = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	// Check if the format string is NULL
	if (format == NULL)
		return (-1);

	// Initialize the va_list
	va_start(list, format);

	// Iterate over the characters in the format string
	for (i = 0; format && format[i] != '\0'; i++)
	{
		// If the character is not '%', add it to the buffer
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			// If the buffer is full, print its contents and reset the index
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			printed_chars++;
		}
		else
		{
			// Print the buffer contents and obtain the flags, width, precision, and size
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;
			// Call the handle_print function to handle the format specifier and perform printing
			printed = handle_print(format, &i, list, buffer,
				flags, width, precision, size);
			// If an error occurs, return -1
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}

	// Print any remaining characters in the buffer
	print_buffer(buffer, &buff_ind);

	// Clean up the va_list
	va_end(list);

	// Return the total number of characters printed
	return (printed_chars);
}

/**
 * print_buffer - Prints the contents of the buffer if it exists
 * @buffer: Array of characters
 * @buff_ind: Index at which to add the next character, represents the length
 */
void print_buffer(char buffer[], int *buff_ind)
{
	// If the buffer is not empty, print its contents
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	// Reset the buffer index
	*buff_ind = 0;
}
