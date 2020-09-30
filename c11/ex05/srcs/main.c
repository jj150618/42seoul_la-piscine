/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 22:04:32 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/21 16:35:52 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "do_op.h"

int		do_op(int a, int b, char c, int (*f[5])(int, int))
{
	if (c == '+')
		return (f[0](a, b));
	else if (c == '-')
		return (f[1](a, b));
	else if (c == '*')
		return (f[2](a, b));
	else if (c == '/')
		return (f[3](a, b));
	else if (c == '%')
		return (f[4](a, b));
	else
		return (0);
}

int		ft_check_zero(int n, char c)
{
	if (c == '/' && n == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (1);
	}
	if (c == '%' && n == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (1);
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	int a;
	int b;
	int c;
	int (*ft[5])(int, int);

	ft[0] = &ft_add;
	ft[1] = &ft_sub;
	ft[2] = &ft_mul;
	ft[3] = &ft_div;
	ft[4] = &ft_mod;
	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (ft_check_zero(b, argv[2][0]))
		return (0);
	c = do_op(a, b, argv[2][0], ft);
	ft_putnbr(c);
	write(1, "\n", 1);
	return (0);
}
