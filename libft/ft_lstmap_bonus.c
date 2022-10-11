/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: ncornacc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 15:29:11 by ncornacc      #+#    #+#                 */
/*   Updated: 2022/10/11 16:24:16 by ncornacc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*start;

	if (!lst || !f)
		return (0);
	ptr = ft_lstnew(f(lst->content));
	start = ptr;
	lst = lst->next;
	while (lst)
	{
		ptr->next = ft_lstnew(f(lst->content));
		ptr = ptr->next;
		lst = lst->next;
	}
	ft_lstclear(&lst, del);
	ptr->next = NULL;
	return (start);
}
