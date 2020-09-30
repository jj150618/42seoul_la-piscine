/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukim <ukim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 06:06:25 by ukim              #+#    #+#             */
/*   Updated: 2020/08/09 18:58:54 by jiahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			g_colup[4];
int			g_coldown[4];
int			g_rowleft[4];
int			g_rowright[4];
extern int	g_flag;

int		check_input(char **argv);
void	recursive(int level);

void	input_value(char **argv)
{
	int i;

	i = -1;
	while (++i < 4)
		g_colup[i] = argv[1][2 * i] - '0';
	while (--i > -1)
		g_coldown[i] = argv[1][2 * i + 8] - '0';
	while (++i < 4)
		g_rowleft[i] = argv[1][2 * i + 16] - '0';
	while (--i > -1)
		g_rowright[i] = argv[1][2 * i + 24] - '0';
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		input_value(argv);
		if (check_input(argv))
		{
			recursive(0);
			if (g_flag == 0)
				write(1, "Error\n", 6);
		}
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
