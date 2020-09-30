/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 23:32:52 by myokim            #+#    #+#             */
/*   Updated: 2020/08/16 02:24:03 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_atoi(char *str)
{
	int	i;
	int	value;
	int	sign;

	i = 0;
	sign = 0;
	value = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	if (str[i] < '0' || str[i] > '9')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		value = value * 10 + str[i] - '0';
		i++;
	}
	if (sign % 2 == 1)
		value = value * (-1);
	return (value);
}

void	ft_dict_print(char *str, char *dict, int digit)
{
	int	k;
	int i;

	i = -1;
	while (dict[++i] != '\0')
	{
		k = i;
		if (str[digit] == dict[k])
		{
			if (ft_atoi(&str[digit]) == 0)
				return ;
			if (ft_atoi(&str[digit]) == ft_atoi(&dict[k]))
			{
				while (dict[k] >= '0' && dict[k] <= '9')
					k++;
				while (dict[k] != '\n' && (dict[k] == ':' || dict[k] == ' '))
					k++;
				while (dict[k] != '\n')
					write(1, &dict[k++], 1);
				break ;
			}
		}
	}
}
