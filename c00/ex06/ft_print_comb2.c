/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 09:55:58 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/03 17:08:51 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		num1;
	int		num2;
	char	comb2[7];

	num1 = -1;
	comb2[2] = ' ';
	comb2[5] = ',';
	comb2[6] = ' ';
	while (++num1 < 100)
	{
		num2 = num1;
		while (++num2 < 100)
		{
			comb2[0] = num1 / 10 + 48;
			comb2[1] = num1 % 10 + 48;
			comb2[3] = num2 / 10 + 48;
			comb2[4] = num2 % 10 + 48;
			write(1, &comb2[0], 3);
			if (num1 < num2)
				write(1, &comb2[3], 2);
			if (!(num1 == 98))
				write(1, &comb2[5], 2);
		}
	}
}
