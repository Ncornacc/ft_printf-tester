/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncornacc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 13:48:43 by ncornacc      #+#    #+#                 */
/*   Updated: 2022/10/04 16:15:57 by ncornacc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t 	k;
	size_t 	i;
	size_t 	count;

	k = 0;
	i = 0;
	count = 0;
	while(src[k])
		k++;
	count = k;
	k = 0;
	while(dest[k] && n > k )
		k++;
	count += k;
	if(n > 1)
	{
		n -= (k + 1);
		while (n > i)
		{
			dest[k] = src[i];
			k++;
			i++;
		}
		dest[k] = '\0';
	}
	return (count);
}
