/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <thjacque@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 21:05:03 by thjacque          #+#    #+#             */
/*   Updated: 2020/11/30 00:51:41 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_digitlen(int n)
{
	unsigned int	nb;
	int				i;

	i = 1;
	nb = n;
	if (n < 0)
	{
		i = 2;
		nb = -n;
	}
	while (nb > 9)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	unsigned int	nb;
	int				size;
	char			*res;

	nb = n;
	if (n < 0)
		nb = -n;
	size = ft_digitlen(n);
	if (!(res = malloc((size + 1) * sizeof(char))))
		return (NULL);
	res[size--] = 0;
	while (nb > 9)
	{
		res[size--] = (nb % 10) + '0';
		nb /= 10;
	}
	res[size--] = (nb % 10) + '0';
	if (n < 0)
		res[size] = '-';
	return (res);
}
