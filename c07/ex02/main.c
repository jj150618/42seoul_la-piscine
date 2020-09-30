/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 12:59:05 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/21 13:28:50 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
//	int min = -2147483648;
//	int max = 2147483647;
	int min = 2615;
	int max = -214748648;
	int *result;
	int range = ft_ultimate_range(&result, min, max);
	printf("%d\n", range);
	return 0;
}
