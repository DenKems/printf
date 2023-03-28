#include "main.h"

/**
* _printf - produces output according to a format
* @format: pointer to character string
* @...: unknown variadic parameters
* Return:  number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list list;
	int i = 0;
	int value = 0;
	int num_char_printed = 0;
	int (*f)(va_list);

	va_start(list, format);

	/* To avoid parsing a null pointer */
	if (format == NULL)
		return (-1);

	/* To print each character in the string */
	while (format[i])
	{
		if (format[i] != '%')
		{
			value = write(1, &format[i], 1);
			num_char_printed = num_char_printed + value;
			i++;
			continue;
		}

		if (format[i] == '%')
		{
			f = check_specifier(&format[i + 1]);
			if (f != NULL)
			{
				value = f(list);
				num_char_printed = num_char_printed + value;
				i = i + 2;
				continue;

			if (format[i + 1] == '\0')
			{
				break;
			}

			if (format[i + 1] != '\0')
			{
				value = write(1, &format[i + 1], 1);
				num_char_printed = num_char_printed + value;
				i = i + 2;
				continue;
			}
		}

	}
	return (num_char_printed);
	}
}
