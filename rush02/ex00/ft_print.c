/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 23:40:31 by myokim            #+#    #+#             */
/*   Updated: 2020/08/16 02:22:29 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_str.h"

char		*ft_read_dict(void)
{
	char	*dict;
	int		fd;

	dict = (char*)malloc(sizeof(char) * 1025);
	if (0 < (fd = open("./numbers.dict", O_RDONLY)))
	{
		read(fd, dict, 1024);
		close(fd);
	}
	dict[1024] = '\0';
	return (dict);
}

void		ft_check_value(char *str, char *dict, int value)
{
	char	v_print[4];

	if (value <= 9)
		ft_dict_print(str, dict, 2);
	else if (value <= 20 || (value % 10 == 0 && value < 100))
		ft_dict_print(str, dict, 1);
	else if (value < 100)
	{
		v_print[0] = ((value / 10) % 10) + '0';
		v_print[1] = '0';
		ft_dict_print(v_print, dict, 0);
		write(1, "-", 1);
		v_print[1] = (value % 10) + '0';
		ft_dict_print(v_print, dict, 1);
	}
	else if (value < 1000)
	{
		v_print[0] = (value / 100) + '0';
		ft_dict_print(v_print, dict, 0);
		write(1, " ", 1);
		ft_dict_print("100", dict, 0);
		write(1, " ", 1);
		ft_check_value(str, dict, value % 100);
	}
}

int			ft_check_1000(char *digit)
{
	if (digit[0] + digit[1] + digit[2] == 144)
		return (0);
	return (1);
}

void		ft_print_1000(int a)
{
	if (a == 1)
		write(1, "thousand", 8);
	else if (a == 2)
		write(1, "million", 7);
	else if (a == 3)
		write(1, "billion", 7);
	else if (a == 4)
		write(1, "trillion", 8);
	else if (a == 5)
		write(1, "quadrillion", 11);
	else if (a == 6)
		write(1, "quintillion", 11);
	else if (a == 7)
		write(1, "sextillion", 10);
	else if (a == 8)
		write(1, "septillion", 10);
	else if (a == 9)
		write(1, "octillion", 9);
	else if (a == 10)
		write(1, "nonillion", 9);
	else if (a == 11)
		write(1, "decillion", 9);
	else if (a == 12)
		write(1, "undecillion", 11);
}
