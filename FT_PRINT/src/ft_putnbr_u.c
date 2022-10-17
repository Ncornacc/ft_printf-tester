/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_u.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncornacc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 13:35:33 by ncornacc      #+#    #+#                 */
/*   Updated: 2022/10/17 14:12:05 by ncornacc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned int n, int *len)
{
	if (n > 9)
	{
		ft_putnbr(n / 10, len);
		n %= 10;
	}
	ft_putchar(n + '0', len);
}

void	ft_putnbr_base(unsigned int n, char *s, int *len)
{
	unsigned int	base_len;

	if (base_exist(s))
	{
		base_len = 0;
		while (s[base_len])
			base_len++;
		if (n > base_len - 1)
		{
			ft_putnbr_ul(n / base_len, s, len);
			n %= base_len;
		}
		ft_putchar(s[n], len);
	}
}
