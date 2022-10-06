/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   memset.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncornacc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 09:23:24 by ncornacc      #+#    #+#                 */
/*   Updated: 2022/10/04 09:36:51 by ncornacc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char *p;

	p = s;
	while (p && n > 0)
	{	
		*p = c;
		p++;
		n--;
	}
	return (s);
}
