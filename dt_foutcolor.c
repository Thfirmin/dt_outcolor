#include "dt_outcolor.h"

int dt_foutcolor(int fd, char *format, ...)
{
	int	i;
	int	len;

	i = -1;
	len = 0;
	while (*(format + ++i))
		len += write(fd, (format + i), 1);
	return (len);
}
