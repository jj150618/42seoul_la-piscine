/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 22:26:36 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/19 13:03:46 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

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

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
		write(1, &str[i], 1);
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = -1;
	while (par[++i].str)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
	}
}
