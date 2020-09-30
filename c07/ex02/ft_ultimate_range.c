/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 03:40:55 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/21 13:48:15 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*a;
	int i;

	if (max - min <= 0)
	{
		range = 0;
		return (0);
	}
	a = (int *)malloc(sizeof(int) * (max -min));
	if (!a)
	{
		range = 0;
		return (-1);
	}
	i = -1;
	while (++i < (max - min))
		a[i] = min + i;
	*range = a;
	return (max - min);
}
