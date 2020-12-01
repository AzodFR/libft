/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <thjacque@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:43:50 by thjacque          #+#    #+#             */
/*   Updated: 2020/11/23 11:26:24 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	unsigned const char		*s1c;
	unsigned const char		*s2c;

	i = 0;
	s1c = (unsigned const char *)s1;
	s2c = (unsigned const char *)s2;
	if (!n)
		return (0);
	while ((i < n - 1) && s1c[i] == s2c[i])
		i++;
	return ((unsigned char)s1c[i] - (unsigned char)s2c[i]);
}
