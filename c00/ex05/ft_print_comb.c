/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 00:24:12 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/03 13:50:11 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char comb[5];

	comb[0] = '0';
	comb[3] = ',';
	comb[4] = ' ';
	while (comb[0] <= '7')
	{
		comb[1] = '1';
		while (comb[1] <= '8')
		{
			comb[2] = '2';
			while (comb[2] <= '9')
			{
				if (comb[0] < comb[1] && comb[1] < comb[2])
				{
					write(1, &comb[0], 3);
					if (!(comb[0] == '7' && comb[1] == '8' && comb[2] == '9'))
						write(1, &comb[3], 2);
				}
				comb[2]++;
			}
			comb[1]++;
		}
		comb[0]++;
	}
}
