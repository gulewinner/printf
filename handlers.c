#include "main.h"

/************************* WRITE HANDLE *************************/
/**
 * handle_write_char - Prints a string
 * @c: Character to be printed.
 * @buffer: Buffer array for printing.
 * @flags: Active flags calculation.
 * @width: Width specifier.
 * @precision: Precision specifier.
 * @size: Size specifier.
 *
 * Return: Number of characters printed.
 */
int handle_write_char(char c, char buffer[],
	int flags, int width, int precision, int size)
{
	int i = 0;
	char padd = ' ';

	UNUSED(precision);
	UNUSED(size);

	if (flags & F_ZERO)
		padd = '0';

	buffer[i++] = c;
	buffer[i] = '\0';

	if (width > 1)
	{
		buffer[BUFF_SIZE - 1] = '\0';
		for (i = 0; i < width - 1; i++)
			buffer[BUFF_SIZE - i - 2] = padd;

		if (flags & F_MINUS)
			return (write(1, &buffer[0], 1) +
					write(1, &buffer[BUFF_SIZE - i - 1], width - 1));
		else
			return (write(1, &buffer[BUFF_SIZE - i - 1], width - 1) +
					write(1, &buffer[0], 1));
	}

	return (write(1, &buffer[0], 1));
}

/************************* WRITE NUMBER *************************/
/**
 * write_number - Prints a string
 * @is_negative: Sign of the number.
 * @ind: Index for the number in the buffer.
 * @buffer: Buffer array for printing.
 * @flags: Active flags calculation.
 * @width: Width specifier.
 * @precision: Precision specifier.
 * @size: Size specifier.
 *
 * Return: Number of characters printed.
 */
int write_number(int is_negative, int ind, char buffer[],
	int flags, int width, int precision, int size)
{
	int length = BUFF_SIZE - ind - 1;
	char padd = ' ', extra_ch = 0;

	UNUSED(size);

	if ((flags & F_ZERO) && !(flags & F_MINUS))
		padd = '0';
	if (is_negative)
		extra_ch = '-';
	else if (flags & F_PLUS)
		extra_ch = '+';
	else if (flags & F_SPACE)
		extra_ch = ' ';

	return (write_num(ind, buffer, flags, width, precision,
		length, padd, extra_ch));
}

/**
 * write_num - Writes a number using a buffer
 * @ind: Index where the number starts in the buffer.
 * @buffer: Buffer for the number.
 * @flags: Flags for formatting.
 * @width: Width specifier.
 * @prec: Precision specifier.
 * @length: Length of the number.
 * @padd: Padding character.
 * @extra_c: Extra character.
 *
 * Return: Number of printed characters.
 */
int write_num(int ind, char buffer[],
	int flags, int width, int prec,
	int length, char padd, char extra_c)
{
	// ... (unchanged function body)
}

/**
 * write_unsgnd - Writes an unsigned number
 * @is_negative: Indicator if the number is negative.
 * @ind: Index where the number starts in the buffer.
 * @buffer: Buffer for the number.
 * @flags: Flags for formatting.
 * @width: Width specifier.
 * @precision: Precision specifier.
 * @size: Size specifier.
 *
 * Return: Number of written characters.
 */
int write_unsgnd(int is_negative, int ind,
	char buffer[],
	int flags, int width, int precision, int size)
{
	// ... (unchanged function body)
}

/**
 * write_pointer - Writes a memory address
 * @buffer: Buffer for the address.
 * @ind: Index where the address starts in the buffer.
 * @length: Length of the address.
 * @width: Width specifier.
 * @flags: Flags for formatting.
 * @padd: Padding character.
 * @extra_c: Extra character.
 * @padd_start: Starting index for padding.
 *
 * Return: Number of written characters.
 */
int write_pointer(char buffer[], int ind, int length,
	int width, int flags, char padd, char extra_c, int padd_start)
{
	// ... (unchanged function body)
}

