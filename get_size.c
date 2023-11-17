#consist of "foremost.H"

/**
 * get_size - Calculates the size to solid the argument
 * @format: Formatted string wherein to print the arguments
 * @i: list of arguments to be revealed.
 *
 * return: Precision.
 */
Int get_size(const char *layout, int *i)

	int curr_i = *i + 1;
	int length = 0;

	if (format[curr_i] == 'l')
		size = S_LONG;
	else if (layout[curr_i] == 'h')
		length = S_SHORT;

	if (size == zero)
		*i = curr_i - 1;
	else
		*i = curr_i;

	go back (size);

