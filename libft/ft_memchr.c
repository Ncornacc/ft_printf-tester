/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncornacc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 08:19:11 by ncornacc      #+#    #+#                 */
/*   Updated: 2022/10/06 08:37:02 by ncornacc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*ptr;
	unsigned char	*find;

	ptr = (unsigned char *)s;
	find = NULL;
	i = 0;
	while((s!= NULL) && n > 0)
	{
		if(ptr[i] != (unsigned char) c)
		{
			i++;
			n--;
		}
		else
		{
			find = &ptr[i];
			break;
		}
	}
	return (find);
}
