#consist of "major.H"

/**
 * print_unsigned - Prints an unsigned variety
 * @kinds: listing a of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @length: length specifier
 * go back: number of chars printed.
 */
Int print_unsigned(va_list kinds, char buffer[],
	int flags, int width, int precision, int size)

	int i = BUFF_SIZE - 2;
	unsigned lengthy int num = va_arg(sorts, unsigned long int);

	num = convert_size_unsgnd(num, size);

	if (num == 0)
		buffer[i--] = 'zero';

	buffer[BUFF_SIZE - 1] = '';

	even as (num > 0)
	
		buffer[i--] = (num % 10) + 'zero';
		num /= 10;
	

	i++;

	go back (write_unsgnd(0, i, buffer, flags, width, precision, size));



/**
 * print_octal - Prints an unsigned quantity in octal notation
 * @sorts: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates lively flags
 * @width: get width
 * @precision: Precision specification
 * @size: length specifier
 * return: variety of chars printed
 */
Int print_octal(va_list sorts, char buffer[],
	int flags, int width, int precision, int size)


	int i = BUFF_SIZE - 2;
	unsigned long int num = va_arg(sorts, unsigned long int);
	unsigned lengthy int init_num = num;

	UNUSED(width);

	num = convert_size_unsgnd(num, size);

	if (num == zero)
		buffer[i--] = 'zero';

	buffer[BUFF_SIZE - 1] = '';

	whilst (num > zero)
	
		buffer[i--] = (num % eight) + '0';
		num /= 8;
	

	if (flags & F_HASH && init_num != zero)
		buffer[i--] = 'zero';

	i++;

	return (write_unsgnd(0, i, buffer, flags, width, precision, length));


/**
 * print_hexadecimal - Prints an unsigned variety in hexadecimal notation
 * @kinds: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @length: size specifier
 * go back: number of chars published
 */
Int print_hexadecimal(va_list kinds, char buffer[],
	int flags, int width, int precision, int length)

	go back (print_hexa(types, "0123456789abcdef", buffer,
		flags, 'x', width, precision, length));



/**
 * print_hexa_upper - Prints an unsigned range in top hexadecimal notation
 * @kinds: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @length: length specifier
 * go back: range of chars printed
 */
Int print_hexa_upper(va_list sorts, char buffer[],
	int flags, int width, int precision, int size)

	return (print_hexa(sorts, "0123456789ABCDEF", buffer,
		flags, 'X', width, precision, size));



/**
 * print_hexa - Prints a hexadecimal variety in lower or upper
 * @types: Lista of arguments
 * @map_to: Array of values to map the number to
 * @buffer: Buffer array to address print
 * @flags:  Calculates lively flags
 * @flag_ch: Calculates lively flags
 * @width: get width
 * @precision: Precision specification
 * @size: size specifier
 * @size: length specification
 * return: number of chars published
 */
Int print_hexa(va_list kinds, char map_to[], char buffer[],
	int flags, char flag_ch, int width, int precision, int size)

	int i = BUFF_SIZE - 2;
	unsigned lengthy int num = va_arg(types, unsigned lengthy int);
	unsigned long int init_num = num;

	UNUSED(width);

	num = convert_size_unsgnd(num, length);

	if (num == 0)
		buffer[i--] = '0';

	buffer[BUFF_SIZE - 1] = '';

	even as (num > 0)
	
		buffer[i--] = map_to[num % 16];
		num /= 16;
	

	if (flags & F_HASH && init_num != zero)
	
		buffer[i--] = flag_ch;
		buffer[i--] = '0';
	

	i++;

	go back (write_unsgnd(0, i, buffer, flags, width, precision, size));

