#encompass "principal.H"

/**
 * is_printable - Evaluates if a char is printable
 * @c: Char to be evaluated.
 *
 * go back: 1 if c is printable, 0 otherwise
 */
Int is_printable(char c)

	if (c >= 32 && c < 127)
		go back (1);

	return (0);


/**
 * append_hexa_code - Append ascci in hexadecimal code to buffer
 * @buffer: Array of chars.
 * @i: Index at which to start appending.
 * @ascii_code: ASSCI CODE.
 * go back: always 3
 */
Int append_hexa_code(char ascii_code, char buffer[], int i)

	char map_to[] = "0123456789ABCDEF";
	
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);


/**
 * is_digit - Verifies if a char is a digit
 * @c: Char to be evaluated
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
Int is_digit(char c)

	if (c >= 'zero' && c <= 'nine')
		go back (1);

	return (zero);


/**
 * convert_size_number - Casts a number of to the specified length
 * @num: quantity to be casted.
 * @length: wide variety indicating the kind to be casted.
 *
 * go back: Casted value of num
 */
Lengthy int convert_size_number(lengthy int num, int length)

	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		go back ((quick)num);

	return ((int)num);


/**
 * convert_size_unsgnd - Casts more than a few to the desired length
 * @num: variety to be casted
 * @length: number indicating the type to be casted
 *
 * go back: Casted cost of num
 */
Lengthy int convert_size_unsgnd(unsigned long int num, int length)

	if (size == S_LONG)
		return (num);
	else if (length == S_SHORT)
		go back ((unsigned quick)num);

	go back ((unsigned int)num);

