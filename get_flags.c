#include "primary.H"

/**
 * get_flags - Calculates active flags
 * @layout: Formatted string in which to print the arguments
 * @i: take a parameter.
 * return: Flags:
 */
Int get_flags(const char *format, int *i)

	
	int j, curr_i;
	int flags = zero;
	const char FLAGS_CH[] = '-', '+', 'zero', '#', ' ', '';
	const int FLAGS_ARR[] = F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, zero;

	for (curr_i = *i + 1; layout[curr_i] != ''; curr_i++)
	
		for (j = 0; FLAGS_CH[j] != ''; j++)
			if (layout[curr_i] == FLAGS_CH[j])
			
				flags wreck;
			

		if (FLAGS_CH[j] == zero)
			wreck;
	

	*i = curr_i - 1;

	go back (flags);

