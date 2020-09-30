/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 12:12:37 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/21 15:18:10 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void ft_sort_string_tab(char **tab);

int main()
{
	int size = 15;
	char **tab = (char **)malloc(sizeof(char *) * (size + 1));

	tab[0] ="041KFP2f7an";
	tab[1] ="OIBZYVc";
	tab[2] ="81gV0ejk5uz";
	tab[3] ="oQ3MI";
	tab[4] ="qKBsat8i";
	tab[5] =0;
	ft_sort_string_tab(tab);
	for(int i = 0; tab[i]; i++)
		printf("%s\n", tab[i]);

	return 0;
}
