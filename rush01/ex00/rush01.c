/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukim <ukim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 13:37:33 by ukim              #+#    #+#             */
/*   Updated: 2020/08/09 17:42:18 by ukim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		g_answer[5][5];
int		g_col_check[5][5];
int		g_row_check[5][5];
int		g_flag;

int		is_answer(void);

void	print(void)
{
	int		x;
	int		y;
	char	c;

	x = 1;
	g_flag = 1;
	while (x <= 4)
	{
		y = 1;
		while (y <= 4)
		{
			c = g_answer[x][y] + '0';
			write(1, &c, 1);
			if (y != 4)
				write(1, " ", 1);
			y++;
		}
		write(1, "\n", 1);
		x++;
	}
}

void	recursive(int level)
{
	int		x;
	int		r;
	int		c;

	if (level == 16)
	{
		if (g_flag == 0 && is_answer())
			print();
		return ;
	}
	r = level / 4 + 1;
	c = level % 4 + 1;
	x = 0;
	while (++x <= 4)
		if (g_col_check[c][x] == 0 && g_row_check[r][x] == 0)
		{
			g_col_check[c][x] = 1;
			g_row_check[r][x] = 1;
			g_answer[r][c] = x;
			recursive(level + 1);
			g_col_check[c][x] = 0;
			g_row_check[r][x] = 0;
		}
}
