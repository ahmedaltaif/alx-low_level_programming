#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints string
 *
 * @separator: - between strings
 * @n: - args number
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int i;
	char *p;
	va_list args;
	va_start(args, n);

	if (separator == NULL)
	{
		s = "";
	}
	else if (*separator == 0)
	{
		s = "";
	}
	else
	{
		s = (char *) separator;
	}

	if (n > 0)
	{
		printf("%s", va_arg(args, char *));
	}
	for (i = 1; i < n; i++)
	{
		p = va_arg(args, char*);
		if (p == NULL)
		{
			p = "(nil)";
		}
		printf("%s%s", s, p);
	}
	printf("\n");
	va_end(args);
}
