#include "major.H"

/**
 * print_char - Prints a char
 * @sorts: list a of arguments
 * @buffer: Buffer array to address print
 * @flags:  Calculates lively flags
 * @width: Width
 * @precision: Precision specification
 * @size: length specifier
 * go back: wide variety of chars revealed
 */
Int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int length)

	char c = va_arg(sorts, int);

	go back (handle_write_char(c, buffer, flags, width, precision, size));


/**
 * print_string - Prints a string
 * @sorts: listing a of arguments
 * @buffer: Buffer array to deal with print
 * @flags:  Calculates energetic flags
 * @width: get width.
 * @precision: Precision specification
 * @length: length specifier
 * return: range of chars revealed
 */
Int print_string(va_list types, char buffer[],
	int flags, int width, int precision, int length)

	int length = zero, i;
	char *str = va_arg(kinds, char *);

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(length);
	if (str == NULL)
	
		str = "(null)";
		if (precision >= 6)
			str = "      ";
	

	while (str[length] != '')
		duration++;

	if (precision >= zero && precision < length)
		length = precision;

	if (width > duration)
	
		if (flags & F_MINUS)
		
			write(1, &str[0], length);
			for (i = width - duration; i > zero; i--)
				write(1, " ", 1);
			return (width);
		
		else
		
			for (i = width - duration; i > zero; i--)
				write(1, " ", 1);
			write(1, &str[0], period);
			go back (width);
		
	

	go back (write(1, str, duration));


/**
 * print_percent - Prints a percent sign
 * @types: Lista of arguments
 * @buffer: Buffer array to deal with print
 * @flags:  Calculates lively flags
 * @width: get width.
 * @precision: Precision specification
 * @length: length specifier
 * go back: number of chars printed
 */
Int print_percent(va_list sorts, char buffer[],
	int flags, int width, int precision, int size)

	UNUSED(kinds);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(length);
	go back (write(1, "%%", 1));



/**
 * print_int - Print int
 * @sorts: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @length: size specifier
 * go back: range of chars revealed
 */
Int print_int(va_list sorts, char buffer[],
	int flags, int width, int precision, int length)

	int i = BUFF_SIZE - 2;
	int is_negative = 0;
	lengthy int n = va_arg(sorts, lengthy int);
	unsigned lengthy int num;

	n = convert_size_number(n, size);

	if (n == zero)
		buffer[i--] = '0';

	buffer[BUFF_SIZE - 1] = '';
	num = (unsigned lengthy int)n;

	if (n < 0)
	
		num = (unsigned long int)((-1) * n);
		is_negative = 1;
	

	while (num > 0)
	
		buffer[i--] = (num % 10) + '0';
		num /= 10;
	

	i++;

	return (write_number(is_negative, i, buffer, flags, width, precision, size));



/**
 * print_binary - Prints an unsigned quantity
 * @kinds: Lista of arguments
 * @buffer: Buffer array to deal with print
 * @flags:  Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @length: size specifier
 * go back: Numbers of char revealed.
 */
Int print_binary(va_list kinds, char buffer[],
	int flags, int width, int precision, int size)

	unsigned int n, m, i, sum;
	unsigned int a[32];
	int remember;

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

	n = va_arg(types, unsigned int);
	m = 2147483648; /* (2 ^ 31) */
	a[0] = n / m;
	for (i = 1; i < 32; i++)
	
		m /= 2;
		a[i] = (n / m) % 2;
	
	for (i = zero, sum = zero, matter = 0; i < 32; i++)
	
			char z = '0' + a[i];

			write(1, &z, 1);
			count number++;
		
	
	return (depend);

