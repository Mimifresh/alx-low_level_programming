#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sej = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sej, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sej, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sej, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sej, str);
					break;
				default:
					i++;
					continue;
			}
			sej = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
