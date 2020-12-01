/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <thjacque@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 19:20:47 by thjacque          #+#    #+#             */
/*   Updated: 2020/11/30 01:03:48 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*free_all(char **strs, int j)
{
	int		i;

	i = 0;
	while (i != j)
		free(strs[i++]);
	free(strs);
	return (NULL);
}

static char		*malloc_a_case(const char *str, char c, char **strs, int index)
{
	int		i;
	char	*buf;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	if (!(buf = malloc(sizeof(char) * (i + 1))))
		return (free_all(strs, index));
	i = 0;
	while (str[i] != c && str[i])
	{
		buf[i] = str[i];
		i++;
	}
	buf[i] = '\0';
	return (buf);
}

static int		malloc_all(const char *s, char c)
{
	int count;

	count = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c)
		{
			count++;
			while (*s != c && *s)
				s++;
		}
	}
	return (count);
}

char			**ft_split(char const *s, char c)
{
	char		**strs;
	int			i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(strs = malloc(sizeof(char*) * (malloc_all(s, c) + 1))))
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			if (!(strs[i] = malloc_a_case(s, c, strs, i)))
				return (NULL);
			while (*s != c && *s)
				s++;
			i++;
		}
	}
	strs[i] = NULL;
	return (strs);
}
