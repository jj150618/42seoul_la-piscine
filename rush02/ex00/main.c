/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 23:38:01 by myokim            #+#    #+#             */
/*   Updated: 2020/08/16 02:23:19 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "array.h"
#include "ft_print.h"
#include "ft_str.h"

int			ft_sum(char **dict_array, int m)
{
	int		sum;

	sum = dict_array[m][0] + dict_array[m][1] + dict_array[m][2];
	return (sum);
}

void		solve(int m, char **dict_array, char *dict)
{
	int		a;
	int		sum;

	sum = ft_sum(dict_array, m);
	a = ft_atoi(dict_array[m]);
	ft_check_value(dict_array[m], dict, a);
	if (ft_check_1000(dict_array[m]) == 1)
	{
		write(1, " ", 1);
		ft_print_1000(m);
	}
}

int			main(int argc, char *argv[])
{
	char	*dict;
	char	**dict_array;
	int		m;

	if (argc != 2)
		return (0);
	dict = ft_read_dict();
	m = 1 + (ft_strlen(argv[1]) - 1) / 3;
	dict_array = ft_make_array(argv);
	if (m == 1 && argv[1][0] == '0')
	{
		write(1, "zero", 4);
		return (0);
	}
	while (--m >= 0)
	{
		solve(m, dict_array, dict);
	}
	write(1, "\n", 1);
	ft_free_array(dict_array, (ft_strlen(argv[1]) - 1) / 3 - 1);
	free(dict);
	return (0);
}
