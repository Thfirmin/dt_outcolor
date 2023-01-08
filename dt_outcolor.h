#ifndef DT_OUTCOLOR
# define DT_OUTCOLOR
# include <unistd.h>
# include <stdarg.h>

int	dt_outcolor(char *format, ...);
int dt_foutcolor(int fd, char *format, ...);
int	dt_voutcolor(char *format, va_list ap);
int	dt_fvoutcolor(int fd, char *format, va_list ap);

#endif
