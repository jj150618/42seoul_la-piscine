/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 03:32:48 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/18 22:03:39 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int j;
	int	*a;

	i = 0;
	if (min >= max)
		return (0);
	j = max - min;
	a = (int *)malloc(sizeof(int) * j);
	if (!a)
		return (0);
	while (i < j)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}
