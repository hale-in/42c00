/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheeki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 09:57:17 by taeheeki          #+#    #+#             */
/*   Updated: 2021/03/07 19:42:21 by taeheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int num)
{
	char c;

	c = num + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-(nb / 10));
		ft_putchar(-(nb % 10));
	}
	else if (nb != 0)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10);
	}
	return ;
}
