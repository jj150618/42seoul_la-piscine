/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 02:14:57 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/09 18:52:51 by jiahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_input(char **argv)
{
	int i;
	int count;

	i = -1;
	count = 0;
	while (argv[1][++i] != '\0')
	{
		if (i > 31)
			return (0);
		if (((argv[1][i] < 49) || (argv[1][i] > 52)) && argv[1][i] != ' ')
			return (0);
		if (argv[1][i] == argv[1][i + 1])
			return (0);
		if (argv[1][i] >= 49 && argv[1][i] <= 52)
			count++;
		if (argv[1][i] == ' ')
			count--;
	}
	if (i < 31)
		return (0);
	if (count == 1)
		return (1);
	else
		return (0);
}
