/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <thjacque@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:20:07 by thjacque          #+#    #+#             */
/*   Updated: 2020/11/23 11:26:10 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t					i;
	unsigned char			*dst;
	unsigned char			*source;

	dst = (unsigned char *)dest;
	source = (unsigned char *)src;
	i = 0;
	while (i < n && source[i] != (unsigned char)c)
	{
		dst[i] = source[i];
		i++;
	}
	if (i == n)
		return (NULL);
	else
	{
		dst[i] = source[i];
		i++;
		return (&dst[i]);
	}
}
