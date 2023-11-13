#include "main.h"

/**
 * get_width - Calculates the width for printing
 * @format: Formatted string
 * @i: Current index in the format string
 * @list: List of arguments
 *
 * Return: Width
 */
int get_width(const char *format, int *i, va_list list)
{
	// Declare variables
	int curr_i;
	int width = 0;

	// Iterate over the characters in the format string starting from the current index
	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		// Check if the current character is a digit
		if (is_digit(format[curr_i]))
		{
			// Multiply the current width by 10 and add the digit value
			width *= 10;
			width += format[curr_i] - '0';
		}
		// Check if the current character is an asterisk (*)
		else if (format[curr_i] == '*')
		{
			// Increment the current index and retrieve the width from the argument list
			curr_i++;
			width = va_arg(list, int);
			break;
		}
		else
		{
			// Break if the current character is neither a digit nor an asterisk
			break;
		}
	}

	// Update the current index
	*i = curr_i - 1;

	// Return the calculated width
	return (width);
}
