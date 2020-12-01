/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thjacque <thjacque@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 21:56:23 by thjacque          #+#    #+#             */
/*   Updated: 2020/11/23 12:54:00 by thjacque         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	base;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		base = -n;
	}
	else
		base = n;
	if (base >= 10)
		ft_putnbr_fd(base / 10, fd);
	n = base % 10 + '0';
	ft_putchar_fd(n, fd);
}
