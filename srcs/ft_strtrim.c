/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <thjacque@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:45:17 by thjacque          #+#    #+#             */
/*   Updated: 2020/11/23 17:49:20 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isinset(char c, char const *set)
{
	int		i;

	i = -1;
	while (set[++i])
		if (set[i] == c)
			return (1);
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	int		j;
	int		i;
	int		s1size;

	if (!s1 || !set)
		return (NULL);
	j = 0;
	i = 0;
	s1size = ft_strlen(s1) - 1;
	while (s1[i] && ft_isinset(s1[i], set))
		i++;
	while (s1[s1size] && ft_isinset(s1[s1size], set) && s1size > i)
		s1size--;
	if (!(newstr = malloc((s1size - i + 2) * sizeof(char))))
		return (NULL);
	while (i <= s1size)
		newstr[j++] = s1[i++];
	newstr[j] = 0;
	return (newstr);
}
