/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncornacc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 16:46:23 by ncornacc      #+#    #+#                 */
/*   Updated: 2022/10/04 18:06:08 by ncornacc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	ptr = 0;
	i = 0;
	ptr = (char *)s;
	while(s[i])
		i++;
	while(i > 0)
	{
		if(s[i] == (char) c)
			return(ptr+i);
		i--;
	}
	return (0);
}
