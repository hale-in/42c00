/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheeki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:45:34 by taeheeki          #+#    #+#             */
/*   Updated: 2021/03/07 15:31:47 by taeheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	int n;

	n = 0;
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else if (n >= 0)
	{
		write(1, "P", 1);
	}
}
