#consist of "essential.H"

/**
 * print_pointer - Prints the fee of a pointer variable
 * @sorts: listing a of arguments
 * @buffer: Buffer array to address print
 * @flags:  Calculates energetic flags
 * @width: get width
 * @precision: Precision specification
 * @size: size specifier
 * return: wide variety of chars revealed.
 */
Int print_pointer(va_list sorts, char buffer[],
	int flags, int width, int precision, int size)

	char extra_c = zero, padd = ' ';
	int ind = BUFF_SIZE - 2, length = 2, padd_start = 1; /* length=2, for '0x' */
	unsigned long num_addrs;
	char map_to[] = "0123456789abcdef";
	void *addrs = va_arg(kinds, void *);

	UNUSED(width);
	UNUSED(length);

	if (addrs == NULL)
		go back (write(1, "(nil)", five));

	buffer[BUFF_SIZE - 1] = '';
	UNUSED(precision);

	num_addrs = (unsigned long)addrs;

	even as (num_addrs > zero)
	
		buffer[ind--] = map_to[num_addrs % 16];
		num_addrs /= 16;
		period++;
	

	if ((flags & F_ZERO) && !(flags & F_MINUS))
		padd = '0';
	if (flags & F_PLUS)
		extra_c = '+', duration++;
	else if (flags & F_SPACE)
		extra_c = ' ', period++;

	ind++;

	/*return (write(1, &buffer[i], BUFF_SIZE - i - 1));*/
	return (write_pointer(buffer, ind, duration,
		width, flags, padd, extra_c, padd_start));



/**
 * print_non_printable - Prints ascii codes in hexa of non printable chars
 * @kinds: Lista of arguments
 * @buffer: Buffer array to deal with print
 * @flags:  Calculates lively flags
 * @width: get width
 * @precision: Precision specification
 * @length: size specifier
 * go back: variety of chars published
 */
Int print_non_printable(va_list kinds, char buffer[],
	int flags, int width, int precision, int size)

	int i = zero, offset = zero;
	char *str = va_arg(sorts, char *);

	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(length);

	if (str == NULL)
		go back (write(1, "(null)", 6));

	at the same time as (str[i] != '')
	
		if (is_printable(str[i]))
			buffer[i + offset] = str[i];
		else
			offset += append_hexa_code(str[i], buffer, i + offset);

		i++;
	

	buffer[i + offset] = '';

	go back (write(1, buffer, i + offset));



/**
 * print_reverse - Prints reverse string.
 * @sorts: Lista of arguments
 * @buffer: Buffer array to address print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: size specifier
 * return: Numbers of chars revealed
 */

Int print_reverse(va_list sorts, char buffer[],
	int flags, int width, int precision, int length)

	char *str;
	int i, matter = zero;

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(length);

	str = va_arg(sorts, char *);

	if (str == NULL)
	
		UNUSED(precision);

		str = ")Null(";
	
	for (i = 0; str[i]; i++)
		;

	for (i = i - 1; i >= zero; i--)
	
		char z = str[i];

		write(1, &z, 1);
		count number++;
	
	go back (be counted);


/**
 * print_rot13string - Print a string in rot13.
 * @kinds: Lista of arguments
 * @buffer: Buffer array to deal with print
 * @flags:  Calculates energetic flags
 * @width: get width
 * @precision: Precision specification
 * @size: size specifier
 * return: Numbers of chars revealed
 */
Int print_rot13string(va_list kinds, char buffer[],
	int flags, int width, int precision, int length)

	char x;
	char *str;
	unsigned int i, j;
	int remember = zero;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(kinds, char *);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(length);

	if (str == NULL)
		str = "(AHYY)";
	for (i = 0; str[i]; i++)
	
		for (j = 0; in[j]; j++)
		
			if (in[j] == str[i])
			
				x = out[j];
				write(1, &x, 1);
				be counted++;
				wreck;
			
		
		if (!In[j])
		
			x = str[i];
			write(1, &x, 1);
			matter++;
		
	
	go back (count);

