/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncornacc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 13:19:58 by ncornacc      #+#    #+#                 */
/*   Updated: 2022/10/04 16:19:40 by ncornacc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t n)
{
	int i;
	int len;

	len = 0;
	i = 0;
	while(src[len])
		len++;
	while(dest[i])
		i++;
	if (n > 0)
	{
		while((n - 1) > 0)
		{
			dest[i] = src[i];
			i++;
			n--;
		}
	dest[i] = '\0';
	}
	return (len);
} 
