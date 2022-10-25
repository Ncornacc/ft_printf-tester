/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print.h                                            :+:    :+:         */
/*                                                     +:+                    */
/*   By: ncornacc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 12:06:39 by ncornacc      #+#    #+#                 */
/*   Updated: 2022/10/17 14:28:36 by ncornacc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	print_num(va_list args,	int *len);
void	print_str(va_list args,	int *len);
void	print_unum(va_list args, int *len);
void	print_address(va_list args,	int *len);
void	print_hexa_num(va_list args, int *len, char c);
void	ft_putchar(char c, int *len);
void	ft_putnbr(int n, int *len);
void	ft_putstr(char *s, int *len);
void	ft_putnbr_ul(unsigned long num, char *s, int *len);
void	ft_putnbr_u(unsigned int n, int *len);
void	ft_putnbr_base(unsigned int n, char *s, int *len);
#endif
