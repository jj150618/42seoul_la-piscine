/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 19:55:17 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/20 21:02:23 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int forward;
	int backward;

	if (length < 3)
		return (1);
	i = -1;
	forward = length - 1;
	backward = length - 1;
	while (++i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			backward--;
		if (f(tab[i], tab[i + 1]) <= 0)
			forward--;
	}
	if (forward == 0 || backward == 0)
		return (1);
	return (0);
}
