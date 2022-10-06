/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncornacc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 12:59:39 by ncornacc      #+#    #+#                 */
/*   Updated: 2022/10/06 09:44:11 by ncornacc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*new_dest;
	char	*new_src;
	char	temp;
	int		num_temp;
	int		i;

	new_dest = (char *)dest;
	new_src = (char *)src;
	i = 0;
	num_temp = n;
	while (n > 0)
	{
		temp = new_src[i];
		
		n--;
	}
	i = 0;
	while (num_temp > 0)
	{
		new_dest[i] = temp[i];
		num_temp--;
		i++;
	}
	return (dest);
}
