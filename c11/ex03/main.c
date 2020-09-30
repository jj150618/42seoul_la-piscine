/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 18:20:33 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/20 19:52:17 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_count_if(char **tab, int length, int (*f)(char *));

int		ft_check_num(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
	return (1);
}

int		main(void)
{
	char **a;
	a = (char **)malloc(sizeof(char *) * 5);
	a[0] = "bb33";
	a[1] = "3333";
	a[2] = "22a22";
	a[3] = "1111";
	a[4] = 0;
	printf("%d\n", ft_count_if(a, 4, &ft_check_num));
}
