#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
void	ft_args(char c, va_list ap, int *n);
void	ft_putchar(char c, int *n);
void	ft_putstr(char *str, int *n);
void	ft_putnbr(long long int nb, int *n, int is_unsign);
void	ft_puthexa(unsigned long long int nb, int *n, int c);
void	ft_putptr(unsigned long int ptr, int *n);

#endif
