/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 12:29:42 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/21 15:36:43 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *));

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		main(void)
{
	int size = 15;
	char **tab = (char **)malloc(sizeof(char *) * (size + 1));

	tab[0] ="041KFP2f7an";
	tab[1] ="OIBZYVc";
	tab[2] ="81gV0ejk5uz";
	tab[3] ="oQ3MI";
	tab[4] ="qKBsat8i";
	tab[5] =0;
//	tab[6] ="Pezg";
//	tab[7] ="qQjC47oBb";
//	tab[8] ="ikgL";
//	tab[9] ="N";
//	tab[10] ="BMUuJjr";
//	tab[11] ="tInjlFc";
//	tab[12] ="eHr";
//	tab[13] ="zfu09Sr";
//	tab[14] ="A3mIjzo";
//	tab[15] = 0;

	ft_advanced_sort_string_tab(tab, &ft_strcmp);
	for(int i = 0; tab[i]; i++)
		printf("%s\n", tab[i]);
	return 0;
}
