/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 17:50:38 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/20 17:55:39 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  
#include <stdio.h>

int 	*ft_map(int *tab, int length, int (*f)(int));

int 	ft_minus1(int n)
{
	return (n - 1);
}

int 	main(void)
{
	int a[10];
	int *b;
	int i;

	i = -1;
	while (++i < 10)
		a[i] = i;
	b = ft_map(a, 10, &ft_minus1);
	i = -1;
	while (++i < 10)	
		printf("%d\n", b[i]);
	return 0;
}
