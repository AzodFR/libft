/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <thjacque@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:29:03 by thjacque          #+#    #+#             */
/*   Updated: 2020/11/23 12:53:27 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstring;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		if (!(newstring = malloc(sizeof(char))))
			return (NULL);
		newstring[0] = 0;
		return (newstring);
	}
	if (!(newstring = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_memcpy(newstring, s + start, len);
	newstring[len] = 0;
	return (newstring);
}
