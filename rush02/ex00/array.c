/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 23:31:28 by myokim            #+#    #+#             */
/*   Updated: 2020/08/15 23:31:40 by myokim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_str.h"

char		**ft_malloc_array(int len)
{
	char	**dict_array;
	int		i;

	i = 0;
	dict_array = (char **)malloc(sizeof(char *) * len);
	while (i < len)
	{
		dict_array[i] = (char *)malloc(sizeof(char) * 4);
		i++;
	}
	return (dict_array);
}

void		ft_reset_array(char **dict_array, int len)
{
	int		i;
	int		j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < 3)
		{
			dict_array[i][j] = ' ';
			j++;
		}
		i++;
	}
}

char		**ft_make_array(char **argv)
{
	int		i;
	char	**dict_array;
	int		array_1000;
	int		array_100;

	array_1000 = 1 + (ft_strlen(argv[1]) - 1) / 3;
	array_100 = 1 + (ft_strlen(argv[1]) - 1) % 3;
	dict_array = ft_malloc_array(array_1000);
	ft_reset_array(dict_array, array_1000);
	i = 0;
	while (--array_1000 > -1)
	{
		while (--array_100 > -1)
		{
			dict_array[array_1000][2 - array_100] = argv[1][i];
			i++;
		}
		dict_array[array_1000][3] = '\0';
		array_100 = 3;
	}
	return (dict_array);
}

void		ft_free_array(char **dict_array, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		free(dict_array[i]);
		i++;
	}
	free(dict_array);
}
