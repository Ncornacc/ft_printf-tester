/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncornacc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 16:47:12 by ncornacc      #+#    #+#                 */
/*   Updated: 2022/10/04 18:15:02 by ncornacc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	
	ptr = 0;
	ptr = (char *)s;
	while(ptr++)
	{
		if (*ptr == (char)c)
		{
			return (ptr);
		}
		if (!*ptr) 
			return (0);
	}
	return(0);
}
