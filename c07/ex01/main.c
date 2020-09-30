/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 12:40:36 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/18 12:43:17 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int *ft_range(int min, int max);

int main(void)
{
	int min = 0;
	int max = 0;
	int *result = ft_range(min, max);
	for(int i = 0; i < max - min; i++)
		printf("%d ", result[i]);
	printf("\n");
	return 0;
}
