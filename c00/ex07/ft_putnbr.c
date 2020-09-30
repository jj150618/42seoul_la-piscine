/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 16:11:39 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/05 16:47:36 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char a;
	char minus;

	minus = '-';
	if (nb >= 0)
	{
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
		{
			a = nb + '0';
			write(1, &a, 1);
		}
	}
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		write(1, &minus, 1);
		ft_putnbr(-nb);
	}
}
