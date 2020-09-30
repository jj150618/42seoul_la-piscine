/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 17:46:04 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/05 18:09:31 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_write_n(int n, int num[])
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(num[i] + '0');
		i++;
	}
	i = n - 1;
	if (!(num[0] == 10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_number(int n, int num_n, int num[], int i)
{
	int j;

	if (num_n == n)
	{
		ft_write_n(n, num);
	}
	else
	{
		j = i + 1;
		while (j <= 10 - (n - num_n))
		{
			num[num_n] = j;
			ft_print_number(n, num_n + 1, num, j);
			j++;
		}
	}
}

void	ft_print_combn(int n)
{
	int num[10];
	int i;

	i = -1;
	while (++i < n)
	{
		num[i] = 0;
	}
	ft_print_number(n, 0, num, -1);
}
