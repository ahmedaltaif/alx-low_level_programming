#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @n: num of arg
 * @separator: separator
 * Description: returns the sum
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *s;

	va_start(args, n);
	if (separator == NULL)
	{
		s = "";
	} else
	{
		s = (char *) separator;
	}

	if (n > 0)
	{
		printf("%d", va_arg(args, int));
	}
	for (i = 1; i < n; i++)
	{
		printf("%s%d", s, va_arg(args, int));
	}
	printf("\n");
	va_end(args);

}
