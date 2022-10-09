/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncornacc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/09 17:04:15 by ncornacc      #+#    #+#                 */
/*   Updated: 2022/10/09 19:06:05 by ncornacc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static	int	ft_len(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

static	const char	*ft_fill(char *ptr, char const *s, char c)
{
	while (*s == c && *s)
		s++;
	while (*s != c && *s)
	{
		*ptr = *s;
		s++;
		ptr++;
	}
	*ptr = '\0';
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		word_num;
	int		word_len;

	word_num = ft_count(s, c);
	ptr = malloc(sizeof(char *) * (word_num + 1));
	if (!ptr || !c)
		return (0);
	if (*s)
	{
		while (*s)
		{
			word_len = ft_len(s, c);
			if (word_len)
			{
				*ptr = malloc(sizeof(char) * (word_len + 1));
				if (!*ptr)
					return (0);
				s = ft_fill(*ptr, s, c);
				ptr++;
			}
			s++;
		}
		*ptr = NULL;
	}
	else
	{
		ptr = 
		return (ptr);
	}
	return (ptr - word_num);
}
