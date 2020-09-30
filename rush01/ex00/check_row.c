/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_row.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 15:21:33 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/09 17:31:29 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern	int	g_answer[5][5];
extern	int	g_colup[4];
extern	int	g_coldown[4];
extern	int	g_rowleft[4];
extern	int	g_rowright[4];

int	check_height_r(int i)
{
	int index;
	int height;
	int count;

	index = 0;
	height = 0;
	count = 0;
	while (++index < 5)
		if (g_answer[i][index] > height)
		{
			height = g_answer[i][index];
			count++;
		}
	return (count);
}

int	check_height_r_rev(int i)
{
	int index;
	int height;
	int count;

	index = 5;
	height = 0;
	count = 0;
	while (--index > 0)
		if (g_answer[i][index] > height)
		{
			height = g_answer[i][index];
			count++;
		}
	return (count);
}

int	check_row(int i)
{
	int check;

	check = 0;
	if (g_rowleft[i - 1] == check_height_r(i))
		check++;
	if (g_rowright[i - 1] == check_height_r_rev(i))
		check++;
	if (check == 2)
		return (1);
	else
		return (0);
}
