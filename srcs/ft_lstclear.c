/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <thjacque@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 13:42:35 by thjacque          #+#    #+#             */
/*   Updated: 2020/11/23 11:22:07 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*prev;

	if (!del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		prev = *lst;
		*lst = (*lst)->next;
		free(prev);
	}
	*lst = NULL;
}
