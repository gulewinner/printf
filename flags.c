#include "main.h"

/**
 * get_flags - Determines the active flags
 * @format: Formatted string
 * @i: Current index in the format string
 * Return: Flags
 */
int get_flags(const char *format, int *i)
{
	// Declare variables
	int j, curr_i;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	// Iterate over the characters in the format string starting from the current index
	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		// Check if the current character matches any of the flags characters
		for (j = 0; FLAGS_CH[j] != '\0'; j++)
		{
			if (format[curr_i] == FLAGS_CH[j])
			{
				flags |= FLAGS_ARR[j];
				break;
			}
		}

		// Break if no match is found
		if (FLAGS_CH[j] == 0)
			break;
	}

	// Update the current index
	*i = curr_i - 1;

	// Return the flags
	return (flags);
}
