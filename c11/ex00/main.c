/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 17:19:09 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/21 13:51:56 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int));

void	ft_print_nbr(int n)
{
	printf("%d\n", n);
}

int		main(void)
{
	int a[10];
	int i;

	i = -1;
	while (++i < 10)
		a[i] = i;
	ft_foreach(a,100, *ft_print_nbr);
}
