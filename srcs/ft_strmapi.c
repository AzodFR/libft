/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <thjacque@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 21:36:27 by thjacque          #+#    #+#             */
/*   Updated: 2020/11/23 12:50:55 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*newstr;

	if (!s || !f)
		return (NULL);
	i = -1;
	if (!(newstr = malloc((ft_strlen(s) + 1) * sizeof(char))))
		return (NULL);
	while (s[++i])
		newstr[i] = (*f)(i, s[i]);
	newstr[i] = 0;
	return (newstr);
}
