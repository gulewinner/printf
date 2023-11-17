#encompass "main.H"

/**
 * get_precision - Calculates the precision for printing
 * @format: Formatted string in which to print the arguments
 * @i: listing of arguments to be printed.
 * @list: listing of arguments.
 *
 * return: Precision.
 */
Int get_precision(const char *layout, int *i, va_list list)

	int curr_i = *i + 1;
	int precision = -1;

	if (format[curr_i] != '.')
		return (precision);

	precision = zero;

	for (curr_i += 1; format[curr_i] != ''; curr_i++)
	
		if (is_digit(layout[curr_i]))
		
			precision *= 10;
			precision += format[curr_i] - '0';
		
		else if (format[curr_i] == '*')
		
			curr_i++;
			precision = va_arg(listing, int);
			damage;
		
		else
			wreck;
	

	*i = curr_i - 1;

	go back (precision);

