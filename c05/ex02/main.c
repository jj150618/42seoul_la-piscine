/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 17:04:06 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/12 19:36:59 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("%d\n", ft_iterative_power(-1, 3));
	printf("%d\n", ft_iterative_power(4, -1));
	printf("%d\n", ft_iterative_power(2, 10));
	printf("%d\n", ft_iterative_power(3, 4));
}
