/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <thjacque@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 14:01:11 by thjacque          #+#    #+#             */
/*   Updated: 2020/11/27 13:57:02 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*current;
	t_list		*last;
	t_list		*begin;

	begin = NULL;
	if (!lst || !f)
		return (NULL);
	if (!(begin = ft_lstnew((*f)(lst->content))))
	{
		ft_lstclear(&begin, del);
		return (NULL);
	}
	current = begin;
	last = lst->next;
	while (last)
	{
		if (!(current->next = ft_lstnew((*f)(last->content))))
		{
			ft_lstclear(&begin, del);
			return (NULL);
		}
		current = current->next;
		last = last->next;
	}
	return (begin);
}
