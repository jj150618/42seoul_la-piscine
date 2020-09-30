/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 21:41:19 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/18 12:16:50 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_abs(int a, int b)
{
	if (a > b)
		return (a - b);
	else
		return (b - a);
}

int		ft_check_ok(int *q, int p, int c)
{
	int i;
	int check;

	i = 0;
	while (i < c)
	{
		check = ft_abs(q[i], p);
		if (q[i] == p || ft_abs(c, i) == check)
			return (0);
		i++;
	}
	return (1);
}

void	ft_print_q(int *q)
{
	int		i;
	char	print;

	i = -1;
	while (++i < 10)
	{
		print = q[i] + '0';
		write(1, &print, 1);
	}
	write(1, "\n", 1);
}

void	ft_recursive_check(int *q, int c, int *num)
{
	int i;

	i = 0;
	if (c == 10)
	{
		(*num)++;
		ft_print_q(q);
		return ;
	}
	while (i < 10)
	{
		if (ft_check_ok(q, i, c))
		{
			q[c] = i;
			ft_recursive_check(q, c + 1, num);
		}
		i++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	int q[10];
	int num;

	num = 0;
	ft_recursive_check(q, 0, &num);
	return (num);
}
