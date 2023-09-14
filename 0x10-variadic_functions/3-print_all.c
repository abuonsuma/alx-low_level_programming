#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments
 * passed to the function
 */
void print_all(const char * const format, ...)
{
	int q = 0;
	char *str, *sep = "";

	va_list vl;

	va_start(vl, format);

	if (format)
	{
		while (format[q])
		{
			switch (format[q])
			{
				case 'c':
					printf("%s%c", sep, va_arg(vl, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(vl, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(vl, double));
					break;
				case 's':
					str = va_arg(vl, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					q++;
					continue;
			}
			sep = ", ";
			q++;
		}
	}

	printf("\n");
	va_end(vl);
}
