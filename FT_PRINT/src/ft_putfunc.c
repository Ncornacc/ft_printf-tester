/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printfunc.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncornacc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/15 15:52:59 by ncornacc      #+#    #+#                 */
/*   Updated: 2022/10/15 16:37:13 by ncornacc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *len)
{
	*len += write(1, &c, 1);
}

void	ft_putnbr(int n, int *len)
{
	unsigned int	num;

	num = 0;
	if (n < 0)
	{
		ft_putchar('-', len);
		num = -n;
	}
	else
		num = n;
	if (num > 9)
	{
		ft_putnbr(num / 10, len);
		num %= 10;
	}
	ft_putchar(num + '0', len);
}

void	ft_putstr(char *s, int *len)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i], len);
		i++;
	}
}

int	base_exist(char *s)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	if (!s[0])
		return (0);
	while (s[i])
	{
		k = i + 1;
		if (s[i] == '+' || s[i] == '-')
			return (0);
		if (s[i] < 32 || s[i] > 126)
			return (0);
		while (s[k])
		{
			if (s[i] == s[k])
				return (0);
			k++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_ul(unsigned long num, char *s, int *len)
{
	unsigned long	base_len;

	if (base_exist(s))
	{
		base_len = 0;
		while (s[base_len])
			base_len++;
		if (num > base_len - 1)
		{
			ft_putnbr_ul(num / base_len, s, len);
			num %= base_len;
		}
		ft_putchar(s[num], len);
	}
}
