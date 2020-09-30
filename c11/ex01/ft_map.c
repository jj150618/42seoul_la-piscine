/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 17:24:34 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/20 17:55:57 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *a;
	int i;

	a = (int *)malloc(sizeof(int) * length);
	if (!a)
		return (0);
	i = -1;
	while (++i < length)
		a[i] = f(tab[i]);
	return (a);
}
