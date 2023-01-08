#include "dt_outcolor.h"

int	dt_voutcolor(char *format, va_list ap)
{
	int	i;
	int	len;

	i = -1;
	len = 0;
	while (*(format + ++i))
		len += write(1, (format + i), 1);
	(void) ap;
	return (len);
}
