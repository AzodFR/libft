/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <thjacque@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:51:44 by thjacque          #+#    #+#             */
/*   Updated: 2020/11/23 11:26:19 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*src;

	i = -1;
	src = (unsigned char *)s;
	while (++i < n)
		if (src[i] == (unsigned char)c)
			return (&src[i]);
	return (NULL);
}
