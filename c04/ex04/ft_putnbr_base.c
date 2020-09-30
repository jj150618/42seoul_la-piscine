/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 19:58:18 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/11 23:26:55 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_check_base(char *base)
{
	int i;
	int j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_recursive_nbr(long n, char *base, int len)
{
	if (n < 0)
	{
		write(1, "-", 1);
		ft_recursive_nbr(-n, base, len);
	}
	else
	{
		if (n < len)
		{
			write(1, &base[n], 1);
		}
		else
		{
			ft_recursive_nbr(n / len, base, len);
			ft_recursive_nbr(n % len, base, len);
		}
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (!ft_check_base(base))
		return ;
	ft_recursive_nbr((long)nbr, base, ft_strlen(base));
}
