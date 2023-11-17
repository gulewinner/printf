#include "foremost.H"

/**
 * get_width - Calculates the width for printing
 * @layout: Formatted string in which to print the arguments.
 * @i: listing of arguments to be printed.
 * @listing: list of arguments.
 *
 * return: width.
 */
Int get_width(const char *format, int *i, va_list listing)

	int curr_i;
	int width = zero;

	for (curr_i = *i + 1; layout[curr_i] != ''; curr_i++)
	
		if (is_digit(layout[curr_i]))
		
			width *= 10;
			width += format[curr_i] - '0';
		
		else if (format[curr_i] == '*')
		
			curr_i++;
			width = va_arg(list, int);
			spoil;
		
		else
			damage;
	

	*i = curr_i - 1;

	return (width);

