/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncornacc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 15:36:30 by ncornacc      #+#    #+#                 */
/*   Updated: 2022/10/10 16:31:52 by ncornacc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] && s)
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

static	int	ft_len(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] != c && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		word_len;
	int		word_num;
	int		j;
	int		i;

	i = 0;
	j = -1;
	word_num = ft_count(s, c);
	ptr = malloc(sizeof(char *) * (word_num + 1));
	if (!ptr)
		return (0);
	while (++j < word_num)
	{
		while (s[i] == c)
			i++;
		word_len = ft_len(s, c, i);
		ptr[j] = ft_substr(s, i, word_len);
		if (!ptr)
			return (0);
		i += word_len;
	}
	ptr[j] = 0;
	return (ptr);
}
