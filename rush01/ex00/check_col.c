/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_col.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghkim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 15:21:12 by junghkim          #+#    #+#             */
/*   Updated: 2020/08/09 17:29:11 by junghkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern	int	g_answer[5][5];
extern	int	g_colup[4];
extern	int	g_coldown[4];
extern	int	g_rowleft[4];
extern	int	g_rowright[4];

int	check_height_c(int i)
{
	int index;
	int height;
	int count;

	index = 0;
	height = 0;
	count = 0;
	while (++index < 5)
		if (g_answer[index][i] > height)
		{
			height = g_answer[index][i];
			count++;
		}
	return (count);
}

int	check_height_c_rev(int i)
{
	int index;
	int height;
	int count;

	index = 5;
	height = 0;
	count = 0;
	while (--index > 0)
		if (g_answer[index][i] > height)
		{
			height = g_answer[index][i];
			count++;
		}
	return (count);
}

int	check_col(int i)
{
	int check;

	check = 0;
	if (g_colup[i - 1] == check_height_c(i))
		check++;
	if (g_coldown[i - 1] == check_height_c_rev(i))
		check++;
	if (check == 2)
		return (1);
	else
		return (0);
}
