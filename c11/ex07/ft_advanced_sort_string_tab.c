/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 12:21:00 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/21 16:39:54 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		j;
	int		k;
	char	*temp;

	k = 0;
	while (tab[k])
		k++;
	while (k > 1)
	{
		j = 1;
		while (j < k)
		{
			if ((*cmp)(tab[j - 1], tab[j]) >= 0)
			{
				temp = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		k--;
	}
}
