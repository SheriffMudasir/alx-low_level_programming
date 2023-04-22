#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - This function prints anything
 * @format: list of arguments passed to the function
 */
void print_all(const char * const format, ...)
	{
		int x = 0;
		char *str, *stp = "";


		va_list list;


		va_start(list, format);


		if (format)
		{
			while (format[x])
			{
				switch (format[x])
				{
					case 'c':
						printf("%s%c", stp, va_arg(list, int));
						break;
					case 'i':
						printf("%s%d", stp, va_arg(list, int));
						break;
					case 'f':
						printf("%s%f", stp, va_arg(list, double));
						break;
					case 's':
						str = va_arg(list, char *);
						if (!str)
						{
							str = "(nil)";
						}
						printf("%s%s", stp, str);
						break;
					default:
						x++;
						continue;
				}
				stp = ", ";
				x++;
			}
		}


		printf("\n");
		va_end(list);
	}
